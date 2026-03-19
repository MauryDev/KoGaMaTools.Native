#include "FogService.h"
#include <imgui.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>

void KoGaMaTools::Services::FogService::Init(Core::DIContainer& di)
{
	Instance = di.Get<FogService>();

	mainComponent = di.Get<MainComponent>();
	textureManager = di.Get<UI::ITextureManager>();
}

void KoGaMaTools::Services::FogService::Render()
{
	ImGui::Spacing();
	ImGui::SeparatorText("Fog Service");

	if (ImGui::Checkbox("Toggle Fog", &Enabled))
	{
		SetFog();
	}
}

bool KoGaMaTools::Services::FogService::Resolve(TextCommandService::CommandData& command)
{
    if (command.name != L"fog")
        return false;

    if (command.args.empty()) {
        Enabled = !Enabled;
        SetFog();

        std::string msg = "Fog " + std::string(Enabled ? "Enabled" : "Disabled");
        TextCommandService::NotifyUser(msg);
        return true;
    }

    std::wstring_view arg = command.args[0];

    if (arg == L"on" || arg == L"1" || arg == L"true") {
        Enabled = true;
        SetFog();
        TextCommandService::NotifyUser("Fog: ON");
    }
    // Explicit command: /fog off | 0 | false
    else if (arg == L"off" || arg == L"0" || arg == L"false") {
        Enabled = false;
        SetFog();
        TextCommandService::NotifyUser("Fog: OFF");
    }
    else {
        TextCommandService::NotifyUser("Usage: /fog [on/off]");
    }

    return true;
}

std::string_view KoGaMaTools::Services::FogService::GetCommandHelp()
{
    return "Fog Settings:\n"
        "  /fog          - Toggles fog on or off\n"
        "  /fog on|off   - Sets the fog state directly";
}

void KoGaMaTools::Services::FogService::SetFog()
{
	namespace K = KoGaMaAPI::KoGaMa;
	auto value = this->Enabled;
	mainComponent->ExecuteCallback([value](void*) {
		K::UE_RenderSettings::m_set_fog(value);

	});
}
