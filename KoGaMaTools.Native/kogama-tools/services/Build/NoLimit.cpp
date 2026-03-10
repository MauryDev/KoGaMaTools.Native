#include "NoLimit.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"
#include <imgui.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include "../../Helpers/HookHelper.h"

namespace KoGaMaTools::Services
{
	namespace {
		bool (*ModelingDynamicBoxConstraint_CanAddCubeAt_Old)(void* instance, NoLimit::IntVector pos, void* methodInfo);
		bool (*ModelingBoxCountConstraint_CanAddCubeAt_Old)(void* instance, NoLimit::IntVector pos, void* methodInfo);
		bool (*ModelingBoxCountConstraint_CanRemoveCubeAt_Old)(void* instance, NoLimit::IntVector pos, void* methodInfo);
		void (*ConstraintVisualizer_Init_Old)(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo);
	}
	void NoLimit::Init(Core::DIContainer& di)
	{
		Instance = di.Get<NoLimit>();
		auto logger = di.Get<LoggerService>();
		auto configService = di.Get<ConfigService>();
		auto hookingService = di.Get<HookingService>();

		// Load initial configuration values
		LoadConfig(configService->GetConfig());

		const char* module = "NoLimit";
		Helpers::HookHelper::HookDesc descs[] =
		{
			{(void**)KoGaMaAPI::KoGaMa::ConstraintVisualizer::m_Init.ptr, ConstraintVisualizer_Init, (void**)&ConstraintVisualizer_Init_Old},
			{(void**)KoGaMaAPI::KoGaMa::ModelingDynamicBoxConstraint::m_CanAddCubeAt.ptr, ModelingDynamicBoxConstraint_CanAddCubeAt, (void**)&ModelingDynamicBoxConstraint_CanAddCubeAt_Old},
			{(void**)KoGaMaAPI::KoGaMa::ModelingBoxCountConstraint::m_CanAddCubeAt.ptr, ModelingBoxCountConstraint_CanAddCubeAt, (void**)&ModelingBoxCountConstraint_CanAddCubeAt_Old},
			{(void**)KoGaMaAPI::KoGaMa::ModelingBoxCountConstraint::m_CanRemoveCubeAt.ptr, ModelingBoxCountConstraint_CanRemoveCubeAt, (void**)&ModelingBoxCountConstraint_CanRemoveCubeAt_Old},
		};
		Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);
	}
	void NoLimit::Render()
	{
		ImGui::Checkbox("No Limit", &Enabled);

	}
	void NoLimit::LoadConfig(const nlohmann::json& value)
	{
		Enabled = value.value("NoLimit.Enabled", Enabled);
	}
	void NoLimit::OnChangedConfig(const nlohmann::json& value)
	{
		LoadConfig(value);
	}
	void NoLimit::OnSavingConfig(nlohmann::json& value)
	{
		value["NoLimit.Enabled"] = Enabled;
	}
	void NoLimit::ConstraintVisualizer_Init(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo)
	{
		if (!Instance->Enabled)
			ConstraintVisualizer_Init_Old(instance, targetCubeModel, constraint, layer, methodInfo);
	}

	bool NoLimit::ModelingDynamicBoxConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Instance->Enabled)
			return true;
		return ModelingDynamicBoxConstraint_CanAddCubeAt_Old(instance, pos, methodInfo);
	}
	bool NoLimit::ModelingBoxCountConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Instance->Enabled)
			return true;
		return ModelingBoxCountConstraint_CanAddCubeAt_Old(instance, pos, methodInfo);
	}
	bool NoLimit::ModelingBoxCountConstraint_CanRemoveCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Instance->Enabled)
			return true;
		return ModelingBoxCountConstraint_CanRemoveCubeAt_Old(instance, pos, methodInfo);
	}

	bool NoLimit::Resolve(TextCommandService::CommandData& command)
	{
		if (command.name == L"nolimit")
		{
			if (command.args.empty())
			{
				Enabled = !Enabled;
				TextCommandService::NotifyUser(L"NoLimit: " + std::wstring(Enabled ? L"enabled" : L"disabled"));
				return true;
			}

			std::wstring_view subcommand = command.args[0];
			if (subcommand == L"enable")
			{
				Enabled = true;
				TextCommandService::NotifyUser(L"NoLimit enabled");
				return true;
			}
			else if (subcommand == L"disable")
			{
				Enabled = false;
				TextCommandService::NotifyUser(L"NoLimit disabled");
				return true;
			}
		}
		return false;
	}
	std::string_view NoLimit::GetCommandHelp()
	{
		return "/nolimit: Toggle or enable/disable unlimited building mode.\n"
			   "Usage: /nolimit [enable|disable]";
	}
}
