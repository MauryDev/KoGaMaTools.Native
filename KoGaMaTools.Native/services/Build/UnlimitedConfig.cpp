#include "UnlimitedConfig.h"
#include <MinHook.h>
#include <imgui.h>
#include "../../metadata/KoGaMaAPI.KoGaMa.h"
#include  <algorithm>
namespace {
	void(*m0_Initialize_Old)(void*, void* key, float value, float minValue, float maxValue);
	void(*m1_Initialize_Old)(void*, void* key, int value, int minValue, int maxValue);
}
void KoGaMaTools::Services::UnlimitedConfig::Install()
{
	namespace K = KoGaMaAPI::KoGaMa;
	auto methodPtr1 = (void**)K::SettingsSlider::m0_Initialize.ptr;
	auto methodPtr2 = (void**)K::SettingsSlider::m1_Initialize.ptr;
	MH_CreateHook(*methodPtr1, Initialize1, (void**)&m0_Initialize_Old);
	MH_CreateHook(*methodPtr2, Initialize2, (void**)&m1_Initialize_Old);

	MH_EnableHook(*methodPtr1);
	MH_EnableHook(*methodPtr2);
}

void KoGaMaTools::Services::UnlimitedConfig::Render()
{
    // Main Master Switch
    ImGui::Checkbox("Enable Unlimited Config", &Enabled);

    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Allows overriding the default Min/Max limits of game sliders.");

    ImGui::BeginDisabled(!Enabled);
    {
        ImGui::Indent(10.0f);

        // Usage of InputFloat for "No Limit" feel (unlike Sliders which are bounded)
        // We use "%.3f" to allow precision for float settings
        ImGui::InputFloat("Min Value##unlim_min", &MinValue, 1.0f, 100000.0f, "%.3f");
        ImGui::InputFloat("Max Value##unlim_max", &MaxValue, 10000.0f, 100000.0f, "%.3f");

        ImGui::Spacing();

        // Secondary logic: Should the current value be forced (clamped) inside the new range?
        ImGui::Checkbox("Clamp Current Value", &ClampValues);

        if (ImGui::IsItemHovered())
            ImGui::SetTooltip("If enabled, the slider's current value will be forced to stay between your custom Min and Max.");

        // Quick Reset Helper
        if (ImGui::Button("Reset to Standard (0-100)"))
        {
            MinValue = 0.0f;
            MaxValue = 100.0f;
        }

        ImGui::Unindent(10.0f);
    }
    ImGui::EndDisabled();

    ImGui::Separator();
}

void KoGaMaTools::Services::UnlimitedConfig::Initialize1(void* instance, void* key, float value, float minValue, float maxValue)
{
	ProcessLimits(instance,value, minValue, maxValue);


	m0_Initialize_Old(instance, key, value, minValue, maxValue);
}

void KoGaMaTools::Services::UnlimitedConfig::Initialize2(void* instance, void* key, int value, int minValue, int maxValue)
{
	ProcessLimits(instance,value, minValue, maxValue);
	
	m1_Initialize_Old(instance, key, value, minValue, maxValue);

}

void KoGaMaTools::Services::UnlimitedConfig::ProcessLimits(void* instance,auto& value, auto& minValue, auto& maxValue)
{
    namespace K = KoGaMaAPI::KoGaMa;

	using T = std::remove_reference_t<decltype(value)>;
	if (Enabled)
	{

		// Converte os membros da classe (que parecem ser floats) para o tipo T
		minValue = static_cast<T>(MinValue);
		maxValue = static_cast<T>(MaxValue);

		if (ClampValues)
		{
			value = std::clamp<T>(value, minValue, maxValue);
		}

	}
}
