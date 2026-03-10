#include "FastRespawn.h"
#include <MinHook.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include "../../Helpers/HookHelper.h"
#include <imgui.h>

using namespace Tools::Il2Cpp;

namespace {
	bool(*Respawn_old)(void* instance);
	void(*Update_old)(void* instance);


}


void KoGaMaTools::Services::FastRespawn::Render()
{
	ImGui::Checkbox("Enabled Fast Respawn", &Enabled);

}

bool KoGaMaTools::Services::FastRespawn::OnExecute(void* instance)
{
	if (Instance->Enabled)
		return false;
	return Respawn_old(instance);
}

void KoGaMaTools::Services::FastRespawn::OnUpdate(void* instance)
{
	if (Instance->Enabled)
	{
		KoGaMaAPI::KoGaMa::DeathUIBoostMenuController::f_startTime.Set(Il2CppObject(instance), 0.0f);
	}
	Update_old(instance);
}

void KoGaMaTools::Services::FastRespawn::Init(Core::DIContainer& di)
{
	Instance = di.Get<FastRespawn>();
	auto logger = di.Get<LoggerService>();
	auto configService = di.Get<ConfigService>();
	auto hookingService = di.Get<HookingService>();

	LoadConfig(configService->GetConfig());
	
	const char* module = "FastRespawn";
	Helpers::HookHelper::HookDesc descs[] =
	{
		{(void**)KoGaMaAPI::KoGaMa::PlayButton::m_HandlePlayAvailable.ptr, OnExecute, (void**)&Respawn_old},
		{(void**)KoGaMaAPI::KoGaMa::DeathUIBoostMenuController::m_Update.ptr, OnUpdate, (void**)&Update_old},
	};
	Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);
}

void KoGaMaTools::Services::FastRespawn::LoadConfig(const nlohmann::json& value)
{
	Enabled = value.value("FastRespawn.Enabled", Enabled);
}

void KoGaMaTools::Services::FastRespawn::OnChangedConfig(const nlohmann::json& value)
{
	this->LoadConfig(value);
}

void KoGaMaTools::Services::FastRespawn::OnSavingConfig(nlohmann::json& value)
{
	value["FastRespawn.Enabled"] = Enabled;
}

bool KoGaMaTools::Services::FastRespawn::Resolve(TextCommandService::CommandData& command)
{
	auto stateVar = Enabled;
	if (command.name != L"fastrespawn") return false;

	if (command.args.empty()) {
		stateVar = !stateVar;
	}
	else {
		auto arg = command.args[0];
		if (arg == L"on") stateVar = true;
		else if (arg == L"off") stateVar = false;
		else {
			TextCommandService::NotifyUser("Usage: " + std::string("Fast Respawn") + " <on/off> or just command to toggle");
			return true;
		}
	}

	// Feedback unificado
	std::string status = stateVar ? "Enabled " : "Disabled ";
	TextCommandService::NotifyUser(status + "Fast Respawn");
	return true;

	
}

std::string_view KoGaMaTools::Services::FastRespawn::GetCommandHelp()
{
	return "/fastrespawn: Toggle or control fast respawn mode.\n"
		   "Usage: /fastrespawn [on|off] or just command to toggle";
}
