#include "CustomCrossHairColor.h"
#include <MinHook.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <imgui.h>
#include "../LoggerService.h"
namespace {
	void(*UpdateCrossHair_old)(void* instance, void* pickupItem);
}
void KoGaMaTools::Services::CustomCrossHairColor::Install()
{
    auto logger = LoggerService::GetMainTest();

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

void KoGaMaTools::Services::CustomCrossHairColor::OnExecute(void* instance, void* pickupItem)
{
    UpdateCrossHair_old(instance, pickupItem);

    auto crossHair = KoGaMaAPI::KoGaMa::CrossHair::f_crossHair.Get<Il2CppObject>(instance);
	KoGaMaAPI::KoGaMa::UI_Graphic::m_set_color(crossHair, Color);
}

void KoGaMaTools::Services::CustomCrossHairColor::Render()
{
	ImGui::Checkbox("Custom CrossHair Color", &Enable);
    ImGui::BeginDisabled(!Enable);
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
