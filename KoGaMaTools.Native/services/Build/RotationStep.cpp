#include "RotationStep.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <MinHook.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include <imgui.h>

namespace {
	void(*RotateStep_Old)(void*,int, float);
}


void KoGaMaTools::Services::RotationStep::RotateStep_Detour(void* instance, int rotationMode, float rotationSpeed)
{
	if (Instance->Enabled)
	{
		rotationSpeed = std::copysign(Instance->Step, rotationSpeed);
	}
	RotateStep_Old(instance, rotationMode, rotationSpeed);
}

void KoGaMaTools::Services::RotationStep::Render()
{

    // Main Toggle
    ImGui::Checkbox("Enabled Rotation Step", &Enabled);

    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Overrides the default rotation speed with a fixed step value.");

    // Disable controls if the feature is off
    ImGui::BeginDisabled(!Enabled);
    {
        ImGui::Indent(10.0f);

        // The 'Step' value determines how far/fast the object rotates per tick
        ImGui::SliderFloat("Step Value##rotationstep", &Step, 0.01f, 180.0f, "%.2f deg");

        // Useful Presets for common angles
        ImGui::Text("Snap Presets:");
        if (ImGui::Button("5 deg")) { Step = 5.0f; }
        ImGui::SameLine();
        if (ImGui::Button("15 deg")) { Step = 15.0f; }
        ImGui::SameLine();
        if (ImGui::Button("45 deg")) { Step = 45.0f; }
        ImGui::SameLine();
        if (ImGui::Button("90 deg")) { Step = 90.0f; }

        ImGui::Unindent(10.0f);
    }
    ImGui::EndDisabled();

    ImGui::Separator();
}

void KoGaMaTools::Services::RotationStep::Init(Core::DIContainer& di)
{
    Instance = di.Get<RotationStep>();
    auto logger = di.Get<LoggerService>();
    auto configService = di.Get<ConfigService>();
    
    // Load initial configuration values
	LoadConfig(configService->GetConfig());
    
    
    
    auto methodPtr = (void**)KoGaMaAPI::KoGaMa::RotationHelper::m_RotateStep.ptr;
    logger->Assert(methodPtr != nullptr, "[RotationStep] - Null method");

    logger->Assert(*methodPtr != nullptr, "[RotationStep] - Null methodPointer");

    logger->Assert(
        MH_CreateHook(*methodPtr, RotateStep_Detour, (void**)&RotateStep_Old) == MH_OK,
        "[RotationStep] - CreateHook"
    );
    logger->Assert(
        MH_EnableHook(*methodPtr) == MH_OK,
        "[RotationStep] - EnableHook"
    );
}

void KoGaMaTools::Services::RotationStep::LoadConfig(const nlohmann::json& value)
{
    Enabled = value.value("RotationStep.Enabled", Enabled);
	Step = value.value("RotationStep.Step", Step);
}

void KoGaMaTools::Services::RotationStep::OnChangedConfig(const nlohmann::json& value)
{
	LoadConfig(value);
}

void KoGaMaTools::Services::RotationStep::OnSavingConfig(nlohmann::json& value)
{
    value["RotationStep.Enabled"] = Enabled;
	value["RotationStep.Step"] = Step;
}
