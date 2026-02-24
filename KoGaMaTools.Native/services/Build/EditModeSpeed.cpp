#include "EditModeSpeed.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <MinHook.h>
#include "../LoggerService.h"
#include <imgui.h>

using namespace Tools::Il2Cpp;

namespace {
    void(*MoveCharacter_Old)(void* instance, std::array<float, 3> moveDelta, void* methodInfo);
}
void KoGaMaTools::Services::EditModeSpeed::MoveCharacter(void* instance, std::array<float, 3> moveDelta, void* methodInfo)
{
    namespace K = KoGaMaAPI::KoGaMa;
    if (MultiplierEnabled)
    {
        moveDelta[0] *= Multiplier;
        moveDelta[1] *= Multiplier;
        moveDelta[2] *= Multiplier;
    }

    auto value = K::MVBuildModeAvatarLocal_EditMode::m_get_MovementConstrained(instance).Unbox<Il2CppBoolean>() && MovementConstrained;
    K::MVBuildModeAvatarLocal_EditMode::m_set_MovementConstrained(instance, value);

    MoveCharacter_Old(instance, moveDelta, methodInfo);


}

void KoGaMaTools::Services::EditModeSpeed::Install()
{
    namespace K = KoGaMaAPI::KoGaMa;
    auto logger = LoggerService::GetMainTest();

    auto ptr = (void**)K::MVBuildModeAvatarLocal_EditMode::m_MoveCharacter.ptr;

    logger->Assert(ptr != nullptr, "[EditModeSpeed] - Null methodPtr");
    logger->Assert(*ptr != nullptr, "[EditModeSpeed] - Null target");

    logger->Assert(
        MH_CreateHook(*ptr, MoveCharacter, (void**)&MoveCharacter_Old) == MH_OK,
        "[EditModeSpeed] - CreateHook"
    );

    logger->Assert(
        MH_EnableHook(*ptr) == MH_OK,
        "[EditModeSpeed] - EnableHook"
    );
}

void KoGaMaTools::Services::EditModeSpeed::Render()
{
    // Main Toggle
    ImGui::Checkbox("Enable Edit Speed Multiplier", &MultiplierEnabled);

    // Visual grouping: everything below is grayed out if MultiplierEnabled is false
    ImGui::BeginDisabled(!MultiplierEnabled);
    {
        ImGui::Indent(10.0f);

        ImGui::Checkbox("Constrain Movement", &MovementConstrained);

        // Help tooltip for clarity
        if (ImGui::IsItemHovered())
            ImGui::SetTooltip("Locks movement to specific axes for precise building.");

        // Slider with multiplier formatting (e.g., 2.500x)
        ImGui::SliderFloat("Value##editmodespeed", &Multiplier, 0.001f, 10.0f, "%.3fx");

        // Quick presets for better UX
        if (ImGui::Button("Reset (1x)")) { Multiplier = 1.0f; }
        ImGui::SameLine();
        if (ImGui::Button("Fast (5x)")) { Multiplier = 5.0f; }
        ImGui::SameLine();
        if (ImGui::Button("Slow (0.1x)")) { Multiplier = 0.1f; }

        ImGui::Unindent(10.0f);
    }
    ImGui::EndDisabled();

    ImGui::Separator();
}