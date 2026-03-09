#include "UnlimitedConfig.h"
#include <MinHook.h>
#include <imgui.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include  <algorithm>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
namespace {
	void(*m0_Initialize_Old)(void*, void* key, float value, float minValue, float maxValue);
	void(*m1_Initialize_Old)(void*, void* key, int value, int minValue, int maxValue);
	void(*m2_Initialize_Old)(void*, void*, float);
	void(*m3_Initialize_Old)(void*, void*, int);
	void (*m4_Initialize_Old)(void* instance,
		void* key,
		void* itemData,
		float min,
		float max,
		float conversionValue);

	void (*m5_Initialize_Old)(void* instance,
		void* key,
		void* itemData,
		void* minMaxFunc,
		float conversionValue);
}


void KoGaMaTools::Services::UnlimitedConfig::Render()
{
    // Main Master Switch
    ImGui::Checkbox("Enabled Unlimited Config", &Enabled);

    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Allows overriding the default Min/Max limits of game sliders.");

    ImGui::BeginDisabled(!Enabled);
    {
        ImGui::Indent(10.0f);

        ImGui::InputFloat("Min Value##unlim_min", &MinValue, 1.0f, 100000.0f, "%.3f");
        ImGui::InputFloat("Max Value##unlim_max", &MaxValue, 10000.0f, 100000.0f, "%.3f");

        ImGui::Spacing();

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

void KoGaMaTools::Services::UnlimitedConfig::Initialize3(void* instance, void* key, float value)
{
	namespace K = KoGaMaAPI::KoGaMa;

	if (Instance->Enabled)
	{
		auto inputField = K::SettingsInputFieldSlider::m_get_InputField(instance);
		K::UI_InputField::m_set_characterLimit(inputField, 6);
	}

	m2_Initialize_Old(instance, key, value);

}

void KoGaMaTools::Services::UnlimitedConfig::Initialize4(void* instance, void* key, int value)
{
	namespace K = KoGaMaAPI::KoGaMa;

	if (Instance->Enabled)
	{
		auto inputField = K::SettingsInputFieldSlider::m_get_InputField(instance);
		K::UI_InputField::m_set_characterLimit(inputField, 6);
	}

	m3_Initialize_Old(instance, key, value);
}

void KoGaMaTools::Services::UnlimitedConfig::Initialize5(void* instance, void* key, void* itemData, float min, float max, float conversionValue)
{
	namespace K = KoGaMaAPI::KoGaMa;

	if (Instance->Enabled)
	{
		auto inputField = K::SettingsInputFieldSlider::m_get_InputField(instance);
		K::UI_InputField::m_set_characterLimit(inputField, 6);
	}

	m4_Initialize_Old(instance, key, itemData,min, max, conversionValue);
}
void KoGaMaTools::Services::UnlimitedConfig::Initialize6(void* instance,
	void* key,
	void* itemData,
	void* minMaxFunc,
	float conversionValue)
{
	namespace K = KoGaMaAPI::KoGaMa;

	if (Instance->Enabled)
	{
		auto inputField = K::SettingsInputFieldSlider::m_get_InputField(instance);
		K::UI_InputField::m_set_characterLimit(inputField, 6);
	}

	m5_Initialize_Old(instance, key, itemData, minMaxFunc, conversionValue);
}

void KoGaMaTools::Services::UnlimitedConfig::ProcessLimits(void* instance,auto& value, auto& minValue, auto& maxValue)
{
    namespace K = KoGaMaAPI::KoGaMa;

	using T = std::remove_reference_t<decltype(value)>;

	
	if (Instance->Enabled)
	{

		// Converte os membros da classe (que parecem ser floats) para o tipo T
		minValue = static_cast<T>(Instance->MinValue);
		maxValue = static_cast<T>(Instance->MaxValue);

		if (Instance->ClampValues)
		{
			value = std::clamp<T>(value, minValue, maxValue);
		}

	}
}

void KoGaMaTools::Services::UnlimitedConfig::Init(Core::DIContainer& di)
{
	struct HookInfo
	{
		void** methodPtr;
		void* detour;
		void** original;
		const char* name;
	};
    namespace K = KoGaMaAPI::KoGaMa;
    Instance = di.Get<UnlimitedConfig>();
    auto logger = di.Get<LoggerService>();
    auto configService = di.Get<ConfigService>();

	LoadConfig(configService->GetConfig());

	

	HookInfo hooks[] =
	{
		{(void**)K::SettingsSlider::m0_Initialize.ptr, Initialize1, (void**)&m0_Initialize_Old, "m0_Initialize"},
		{(void**)K::SettingsSlider::m1_Initialize.ptr, Initialize2, (void**)&m1_Initialize_Old, "m1_Initialize"},
		{(void**)K::SettingsInputFieldSlider::m2_Initialize.ptr, Initialize3, (void**)&m2_Initialize_Old, "m2_Initialize"},
		{(void**)K::SettingsInputFieldSlider::m3_Initialize.ptr, Initialize4, (void**)&m3_Initialize_Old, "m3_Initialize"},
		{(void**)K::SettingsInputFieldSlider::m0_Initialize.ptr, Initialize6, (void**)&m5_Initialize_Old, "m4_Initialize"},
		{(void**)K::SettingsInputFieldSlider::m1_Initialize.ptr, Initialize5, (void**)&m4_Initialize_Old, "m5_Initialize"},

	};

	for (auto& h : hooks)
	{
		logger->Assert(h.methodPtr != nullptr, "[UnlimitedConfig] - Null methodPtr");
		logger->Assert(*h.methodPtr != nullptr, "[UnlimitedConfig] - Null target");

		logger->Assert(
			MH_CreateHook(*h.methodPtr, h.detour, h.original) == MH_OK,
			"[UnlimitedConfig] - CreateHook"
		);

		logger->Assert(
			MH_EnableHook(*h.methodPtr) == MH_OK,
			"[UnlimitedConfig] - EnableHook"
		);
	}
}

void KoGaMaTools::Services::UnlimitedConfig::LoadConfig(const nlohmann::json& value)
{
    Enabled = value.value("UnlimitedConfig.Enabled", Enabled);
    MinValue = value.value("UnlimitedConfig.MinValue", MinValue);
    MaxValue = value.value("UnlimitedConfig.MaxValue", MaxValue);
	ClampValues = value.value("UnlimitedConfig.ClampValues", ClampValues);
}

void KoGaMaTools::Services::UnlimitedConfig::OnChangedConfig(const nlohmann::json& value)
{
	LoadConfig(value);
}

void KoGaMaTools::Services::UnlimitedConfig::OnSavingConfig(nlohmann::json& value)
{
    value["UnlimitedConfig.Enabled"] = Enabled;
    value["UnlimitedConfig.MinValue"] = MinValue;
    value["UnlimitedConfig.MaxValue"] = MaxValue;
	value["UnlimitedConfig.ClampValues"] = ClampValues;
}

bool KoGaMaTools::Services::UnlimitedConfig::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"unlimitedconfig")
	{
		if (command.args.empty())
		{
			Enabled = !Enabled;
			TextCommandService::NotifyUser(L"UnlimitedConfig: " + std::wstring(Enabled ? L"enabled" : L"disabled"));
			return true;
		}

		std::wstring_view subcommand = command.args[0];
		if (subcommand == L"enable")
		{
			Enabled = true;
			TextCommandService::NotifyUser(L"UnlimitedConfig enabled");
			return true;
		}
		else if (subcommand == L"disable")
		{
			Enabled = false;
			TextCommandService::NotifyUser(L"UnlimitedConfig disabled");
			return true;
		}
		else if (subcommand == L"min" && command.args.size() > 1)
		{
			try
			{
				MinValue = std::stof(std::wstring(command.args[1]));
				TextCommandService::NotifyUser(L"UnlimitedConfig MinValue set to " + std::to_wstring(MinValue));
			}
			catch (...) { }
			return true;
		}
		else if (subcommand == L"max" && command.args.size() > 1)
		{
			try
			{
				MaxValue = std::stof(std::wstring(command.args[1]));
				TextCommandService::NotifyUser(L"UnlimitedConfig MaxValue set to " + std::to_wstring(MaxValue));
			}
			catch (...) { }
			return true;
		}
		else if (subcommand == L"clamp")
		{
			ClampValues = !ClampValues;
			TextCommandService::NotifyUser(L"UnlimitedConfig clamp: " + std::wstring(ClampValues ? L"enabled" : L"disabled"));
			return true;
		}
	}
	return false;
}

std::string_view KoGaMaTools::Services::UnlimitedConfig::GetCommandHelp()
{
	return "/unlimitedconfig: Override min/max limits for game sliders.\n"
		   "Usage: /unlimitedconfig [enable|disable|min <value>|max <value>|clamp]";
}
