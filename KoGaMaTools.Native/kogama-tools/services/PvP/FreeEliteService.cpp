#include "FreeEliteService.h"
#include "../../Helpers/HookHelper.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>

namespace {
	bool (*isSubscriber_old)();
}
void KoGaMaTools::Services::FreeEliteService::Init(Core::DIContainer& di)
{
	Instance = di.Get<FreeEliteService>();

	auto logger = di.Get<LoggerService>();
	auto configService = di.Get<ConfigService>();
	auto hookingService = di.Get<HookingService>();

	LoadConfig(configService->GetConfig());
	const char* module = "FreeElite";

	Helpers::HookHelper::HookDesc descs[] =
	{
		{(void**)KoGaMaAPI::KoGaMa::MVClientSettings::m_get_IsSubscriber.ptr, Hook_IsSubscriber, (void**)&isSubscriber_old},
	};
	Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);

}

void KoGaMaTools::Services::FreeEliteService::Render()
{

	ImGui::Checkbox("Enabled Free Elite", &Enabled);
}

void KoGaMaTools::Services::FreeEliteService::OnChangedConfig(const nlohmann::json& value)
{
	LoadConfig(value);
}

void KoGaMaTools::Services::FreeEliteService::OnSavingConfig(nlohmann::json & value)
{
	value["FreeElite.Enabled"] = Enabled;

}

bool KoGaMaTools::Services::FreeEliteService::Resolve(TextCommandService::CommandData & command)
{
	if (command.name == L"freelite")
	{
		Enabled = !Enabled;
		TextCommandService::NotifyUser(std::wstring(L"Free Elite ") + (Enabled ? L"enabled" : L"disabled"));
		return true;
	}
	return false;
}

std::string_view KoGaMaTools::Services::FreeEliteService::GetCommandHelp()
{
	return "/freelite - Toggle Free Elite (Subscriber features for free)";
}

bool KoGaMaTools::Services::FreeEliteService::Hook_IsSubscriber()
{
	if (Instance->Enabled)
		return true;
	return isSubscriber_old();
}

void KoGaMaTools::Services::FreeEliteService::LoadConfig(const nlohmann::json& value)
{
	Enabled = value.value("FreeElite.Enabled", Enabled);

}
