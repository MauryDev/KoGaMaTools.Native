#include "RotationService.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include "../../Helpers/HookHelper.h"
#include <imgui.h>

namespace {
	void(*RotateStep_Old)(void*,int, float);
	void(*Setup_Old2)(void*, bool, bool);

}


void KoGaMaTools::Services::RotationService::RotateStep_Detour(void* instance, int rotationMode, float rotationSpeed)
{
	if (Instance->ForceFlagsRotation)
	{
		constexpr uint64_t flagsRotationForce = (1ULL << 7) | (1ULL << 8) | (1ULL << 9);
		auto editor = KoGaMaAPI::KoGaMa::RotationHelper::f_editorStateMachine.Get<Tools::Il2Cpp::Il2CppObject>(instance);
		auto wo = KoGaMaAPI::KoGaMa::EditorStateMachine::m_get_SingleSelectedWO(editor);
		auto flags = KoGaMaAPI::KoGaMa::MVWorldObjectClient::m_get_InteractionFlags(wo).Unbox<uint64_t>();
		flags |= flagsRotationForce;

		KoGaMaAPI::KoGaMa::MVWorldObjectClient::m_set_InteractionFlags(wo, flags);
	}
	


	if (Instance->EnabledStep)
	{
		
		rotationSpeed = std::copysign(Instance->Step, rotationSpeed);
	}
	RotateStep_Old(instance, rotationMode, rotationSpeed);
}

void KoGaMaTools::Services::RotationService::Render()
{
	ImGui::SeparatorText("Rotation Tools");

	ImGui::Checkbox("Force Interaction Flags", &ForceFlagsRotation);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Forces flags Rotation X,Y and Z on the object flags to bypass rotation restrictions.");

	ImGui::Spacing();

    ImGui::Checkbox("Enabled Step", &EnabledStep);

    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Overrides the default rotation speed with a fixed step value.");

	ImGui::BeginDisabled(!EnabledStep);
    {
        ImGui::Indent(10.0f);

        ImGui::SliderFloat("Step Value##rotationstep", &Step, 0.01f, 180.0f, "%.2f deg");


		ImGui::Text("Snap Presets:");

		const float steps[] = { 5.f, 15.f, 45.f, 90.f, 120.f, 150.f, 180.f };
		if (ImGui::BeginCombo("Snap", "Select a Value")) {
			for (float s : steps) {
				bool is_selected = (Step == s);
				char buf[16];
				sprintf_s(buf, "%.0f°", s);

				if (ImGui::Selectable(buf, is_selected)) {
					Step = s;
				}

				if (is_selected) ImGui::SetItemDefaultFocus();
			}
			ImGui::EndCombo();
		}

        ImGui::Unindent(10.0f);
    }
    ImGui::EndDisabled();


    ImGui::Separator();

}

void KoGaMaTools::Services::RotationService::Init(Core::DIContainer& di)
{

	namespace K = KoGaMaAPI::KoGaMa;
    Instance = di.Get<RotationService>();
    auto logger = di.Get<LoggerService>();
    auto configService = di.Get<ConfigService>();
    auto hookingService = di.Get<HookingService>();

	LoadConfig(configService->GetConfig());
    


    const char* module = "RotationService";
    Helpers::HookHelper::HookDesc descs[] =
    {
        {(void**)KoGaMaAPI::KoGaMa::RotationHelper::m_RotateStep.ptr, RotateStep_Detour, (void**)&RotateStep_Old},
		{(void**)K::GizmoRotationButtonHolderNg::m_Setup.ptr,SetupHookButtonRotation, (void**)&Setup_Old2},
    };
    Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);
}

void KoGaMaTools::Services::RotationService::LoadConfig(const nlohmann::json& value)
{
	EnabledStep = value.value("RotationService.EnabledStep", EnabledStep);
	Step = value.value("RotationService.Step", Step);
	ForceFlagsRotation = value.value("RotationService.ForceFlagsRotation", ForceFlagsRotation);
}

void KoGaMaTools::Services::RotationService::OnChangedConfig(const nlohmann::json& value)
{
	LoadConfig(value);
}

void KoGaMaTools::Services::RotationService::OnSavingConfig(nlohmann::json& value)
{
    value["RotationService.EnabledStep"] = EnabledStep;
	value["RotationService.Step"] = Step;
	value["RotationService.ForceFlagsRotation"] = ForceFlagsRotation;
}

bool KoGaMaTools::Services::RotationService::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"rotationstep")
	{
		if (command.args.empty())
		{
			EnabledStep = !EnabledStep;
			TextCommandService::NotifyUser(L"RotationService step: " + std::wstring(EnabledStep ? L"enabled" : L"disabled"));
			return true;
		}

		std::wstring_view subcommand = command.args[0];
		if (subcommand == L"force") {
			ForceFlagsRotation = !ForceFlagsRotation;
			TextCommandService::NotifyUser(L"Force flags: " + std::wstring(ForceFlagsRotation ? L"ON" : L"OFF"));
			return true;
		}
		else if (subcommand == L"enable")
		{
			EnabledStep = true;
			TextCommandService::NotifyUser(L"RotationService step enabled");
			return true;
		}
		else if (subcommand == L"disable")
		{
			EnabledStep = false;
			TextCommandService::NotifyUser(L"RotationService step disabled");
			return true;
		}
		else if (subcommand == L"step" && command.args.size() > 1)
		{
			try
			{
				Step = std::stof(std::wstring(command.args[1]));
				TextCommandService::NotifyUser(L"RotationService set to " + std::to_wstring(Step) + L" degrees");
			}
			catch (...) { }
			return true;
		}
	}
	return false;
}

std::string_view KoGaMaTools::Services::RotationService::GetCommandHelp()
{
	return "/rotationstep: Tools for object rotation.\n"
		"Usage: /rotationstep [enable|disable|force|step <degrees>]";
}

void KoGaMaTools::Services::RotationService::SetupHookButtonRotation(void* instance, bool canRotate, bool memberRequired)
{
	if (Instance->ForceFlagsRotation)
	{
		canRotate = true;
		memberRequired = false;
	}
	Setup_Old2(instance, canRotate, memberRequired);
}
