#include "EditModeSpeed.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <MinHook.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include <imgui.h>

using namespace Tools::Il2Cpp;

namespace {
    void(*MoveCharacter_Old)(void* instance, std::array<float, 3> moveDelta, void* methodInfo);
}
void KoGaMaTools::Services::EditModeSpeed::MoveCharacter(void* instance, std::array<float, 3> moveDelta, void* methodInfo)
{
    namespace K = KoGaMaAPI::KoGaMa;
    if (Instance->MultiplierEnabled)
    {
        moveDelta[0] *= Instance->Multiplier;
        moveDelta[1] *= Instance->Multiplier;
        moveDelta[2] *= Instance->Multiplier;
    }

    auto value = K::MVBuildModeAvatarLocal_EditMode::m_get_MovementConstrained(instance)
        .Unbox<Il2CppBoolean>() &&
        Instance->MovementConstrained;

    K::MVBuildModeAvatarLocal_EditMode::m_set_MovementConstrained(instance, value);

    MoveCharacter_Old(instance, moveDelta, methodInfo);


}

void KoGaMaTools::Services::EditModeSpeed::Init(Core::DIContainer& di)
{
    Instance = di.Get<EditModeSpeed>();

    namespace K = KoGaMaAPI::KoGaMa;
    auto logger = di.Get<LoggerService>();
    auto configService = di.Get<ConfigService>();

    // Load initial configuration values
	LoadConfig(configService->GetConfig());

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
    ImGui::Checkbox("Enabled Edit Speed Multiplier", &MultiplierEnabled);

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

void KoGaMaTools::Services::EditModeSpeed::LoadConfig(const nlohmann::json& value)
{
    MultiplierEnabled = value.value("EditModeSpeed.MultiplierEnabled", MultiplierEnabled);
    Multiplier = value.value("EditModeSpeed.Multiplier", Multiplier);
	MovementConstrained = value.value("EditModeSpeed.MovementConstrained", MovementConstrained);
}

void KoGaMaTools::Services::EditModeSpeed::OnChangedConfig(const nlohmann::json& value)
{
    LoadConfig(value);
}

void KoGaMaTools::Services::EditModeSpeed::OnSavingConfig(nlohmann::json& value)
{
    value["EditModeSpeed.MultiplierEnabled"] = MultiplierEnabled;
    value["EditModeSpeed.Multiplier"] = Multiplier;
	value["EditModeSpeed.MovementConstrained"] = MovementConstrained;
}
