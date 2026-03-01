#include "CustomCrossHairColor.h"
#include <MinHook.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <imgui.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"

using namespace Tools::Il2Cpp;

namespace {
	void(*UpdateCrossHair_old)(void* instance, void* pickupItem);
}


void KoGaMaTools::Services::CustomCrossHairColor::OnExecute(void* instance, void* pickupItem)
{
    UpdateCrossHair_old(instance, pickupItem);

    auto crossHair = KoGaMaAPI::KoGaMa::CrossHair::f_crossHair.Get<Il2CppObject>(instance);
	KoGaMaAPI::KoGaMa::UI_Graphic::m_set_color(crossHair, Instance->Color);
}

void KoGaMaTools::Services::CustomCrossHairColor::Render()
{
	ImGui::Checkbox("Custom CrossHair Color", &Enabled);
    ImGui::BeginDisabled(!Enabled);
    {
        ImGui::ColorEdit4(
            "Color",
            &Color.x,
            ImGuiColorEditFlags_DisplayRGB |   
            ImGuiColorEditFlags_Float |        
            ImGuiColorEditFlags_AlphaBar |   
            ImGuiColorEditFlags_HDR           
        );
		ImGui::EndDisabled();
    }
    if (ImGui::IsItemHovered())
    {
        ImGui::SetTooltip("Choose the color used for the custom crosshair.");
    }

}

void KoGaMaTools::Services::CustomCrossHairColor::Init(Core::DIContainer& di)
{
    Instance = di.Get<CustomCrossHairColor>();
    auto logger = di.Get<LoggerService>();
    auto configService = di.Get<ConfigService>();

    // Load initial configuration values
	LoadConfig(configService->GetConfig());

    auto method1 = (void**)KoGaMaAPI::KoGaMa::CrossHair::m_UpdateCrossHair.ptr;

    logger->Assert(method1 != nullptr, "[CustomCrossHairColor] - Null methodPtr");
    logger->Assert(*method1 != nullptr, "[CustomCrossHairColor] - Null target");

    logger->Assert(
        MH_CreateHook(*method1, &OnExecute, (void**)&UpdateCrossHair_old) == MH_OK,
        "[CustomCrossHairColor] - CreateHook"
    );

    logger->Assert(
        MH_EnableHook(*method1) == MH_OK,
        "[CustomCrossHairColor] - EnableHook"
    );
}

void KoGaMaTools::Services::CustomCrossHairColor::LoadConfig(const nlohmann::json& value)
{
    Enabled = value.value("CustomCrossHairColor.Enabled", Enabled);
    Color.x = value.value("CustomCrossHairColor.Color.x", Color.x);
    Color.y = value.value("CustomCrossHairColor.Color.y", Color.y);
    Color.z = value.value("CustomCrossHairColor.Color.z", Color.z);
	Color.w = value.value("CustomCrossHairColor.Color.w", Color.w);
}

void KoGaMaTools::Services::CustomCrossHairColor::OnChangedConfig(const nlohmann::json& value)
{
	this->LoadConfig(value);
}

void KoGaMaTools::Services::CustomCrossHairColor::OnSavingConfig(nlohmann::json& value)
{
    value["CustomCrossHairColor.Enabled"] = Enabled;
    value["CustomCrossHairColor.Color.x"] = Color.x;
    value["CustomCrossHairColor.Color.y"] = Color.y;
    value["CustomCrossHairColor.Color.z"] = Color.z;
	value["CustomCrossHairColor.Color.w"] = Color.w;
}

bool KoGaMaTools::Services::CustomCrossHairColor::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"crosshaircolor")
	{
		if (command.args.empty())
		{
			Enabled = !Enabled;
			TextCommandService::NotifyUser(L"CustomCrossHairColor: " + std::wstring(Enabled ? L"enabled" : L"disabled"));
			return true;
		}

		std::wstring_view subcommand = command.args[0];
		if (subcommand == L"enable")
		{
			Enabled = true;
			TextCommandService::NotifyUser(L"CustomCrossHairColor enabled");
			return true;
		}
		else if (subcommand == L"disable")
		{
			Enabled = false;
			TextCommandService::NotifyUser(L"CustomCrossHairColor disabled");
			return true;
		}
	}
	return false;
}
