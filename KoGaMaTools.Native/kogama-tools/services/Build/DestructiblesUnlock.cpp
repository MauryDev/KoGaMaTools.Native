#include "DestructiblesUnlock.h"
#include <MinHook.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <imgui.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include "../../Helpers/HookHelper.h"

namespace {
	bool(*IsAvailable_Old)(void* instance, void* methodInfo);
}
bool KoGaMaTools::Services::DestructiblesUnlock::IsAvailable(void* instance, void* methodInfo)
{
	if (Instance->Unlock) return true;
	return IsAvailable_Old(instance, methodInfo);
}

void KoGaMaTools::Services::DestructiblesUnlock::Init(Core::DIContainer& di)
{
    Instance = di.Get<DestructiblesUnlock>();
    auto logger = di.Get<LoggerService>();
    auto configService = di.Get<ConfigService>();
    auto hookingService = di.Get<HookingService>();

    LoadConfig(configService->GetConfig());

    const char* module = "DestructiblesUnlock";
    Helpers::HookHelper::HookDesc descs[] =
    {
        {(void**)KoGaMaAPI::KoGaMa::MVMaterial::m_get_IsAvailable.ptr, IsAvailable, (void**)&IsAvailable_Old},
    };
    Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);
}

void KoGaMaTools::Services::DestructiblesUnlock::Render()
{
	ImGui::Checkbox("Destructibles Unlock", &Unlock);

}

void KoGaMaTools::Services::DestructiblesUnlock::LoadConfig(const nlohmann::json& value)
{
    Unlock = value.value("DestructiblesUnlock.Unlock", Unlock);

}

void KoGaMaTools::Services::DestructiblesUnlock::OnChangedConfig(const nlohmann::json& value)
{
    this->LoadConfig(value);
}

void KoGaMaTools::Services::DestructiblesUnlock::OnSavingConfig(nlohmann::json& value)
{
    value["DestructiblesUnlock.Unlock"] = Unlock;
}

bool KoGaMaTools::Services::DestructiblesUnlock::Resolve(TextCommandService::CommandData& command)
{
    if (command.name != L"destructiblesunlock") return false;

    if (!command.args.empty()) {
        std::wstring_view arg = command.args[0];
        if (arg == L"on") Unlock = true;
        else if (arg == L"off") Unlock = false;
        else {
            TextCommandService::NotifyUser("Usage: destructiblesunlock <on/off>");
            return true;
        }
    }
    else {
        Unlock = !Unlock;
    }

    TextCommandService::NotifyUser(std::string(Unlock ? "Enabled" : "Disabled") + " Blue Mode");

    return true;
}

std::string_view KoGaMaTools::Services::DestructiblesUnlock::GetCommandHelp()
{
	return "/destructiblesunlock: Toggle or control destructible objects unlock.\n"
		   "Usage: /destructiblesunlock [on/off] or just command to toggle";
}
