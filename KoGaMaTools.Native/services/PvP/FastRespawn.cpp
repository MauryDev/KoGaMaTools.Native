#include "FastRespawn.h"
#include <MinHook.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../LoggerService.h"
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

	LoadConfig(configService->GetConfig());
	auto method1 = (void**)KoGaMaAPI::KoGaMa::PlayButton::m_HandlePlayAvailable.ptr;
	auto method2 = (void**)KoGaMaAPI::KoGaMa::DeathUIBoostMenuController::m_Update.ptr;

	logger->Assert(method1 != nullptr, "[FastRespawn] - Null methodPtr #1");
	logger->Assert(*method1 != nullptr, "[FastRespawn] - Null target #1");
	logger->Assert(method2 != nullptr, "[FastRespawn] - Null methodPtr #2");
	logger->Assert(*method2 != nullptr, "[FastRespawn] - Null target #2");

	logger->Assert(
		MH_CreateHook(*method1, OnExecute, (void**)&Respawn_old) == MH_OK,
		"[FastRespawn] - CreateHook #1"
	);
	logger->Assert(
		MH_CreateHook(*method2, OnUpdate, (void**)&Update_old) == MH_OK,
		"[FastRespawn] - CreateHook #2"
	);
	logger->Assert(
		MH_EnableHook(*method1) == MH_OK,
		"[FastRespawn] - EnableHook #1"
	);
	logger->Assert(
		MH_EnableHook(*method2) == MH_OK,
		"[FastRespawn] - EnableHook #2"
	);
	
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
