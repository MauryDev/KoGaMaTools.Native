#include "NoLimit.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"
#include <imgui.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"

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

		// Load initial configuration values
		LoadConfig(configService->GetConfig());

		auto methodVer = (void**)KoGaMaAPI::KoGaMa::ConstraintVisualizer::m_Init.ptr;
		auto methodVer2 = (void**)KoGaMaAPI::KoGaMa::ModelingDynamicBoxConstraint::m_CanAddCubeAt.ptr;
		auto methodVer3 = (void**)KoGaMaAPI::KoGaMa::ModelingBoxCountConstraint::m_CanAddCubeAt.ptr;
		auto methodVer4 = (void**)KoGaMaAPI::KoGaMa::ModelingBoxCountConstraint::m_CanRemoveCubeAt.ptr;

		logger->Assert(methodVer && *methodVer, "[NoLimit] - Null ConstraintVisualizer::Init");
		logger->Assert(methodVer2 && *methodVer2, "[NoLimit] - Null DynamicBoxConstraint::CanAdd");
		logger->Assert(methodVer3 && *methodVer3, "[NoLimit] - Null BoxCountConstraint::CanAdd");
		logger->Assert(methodVer4 && *methodVer4, "[NoLimit] - Null BoxCountConstraint::CanRemove");

		logger->Assert(MH_CreateHook(*methodVer, ConstraintVisualizer_Init, (void**)&ConstraintVisualizer_Init_Old) == MH_OK, "[NoLimit] - CreateHook Init");
		logger->Assert(MH_CreateHook(*methodVer2, ModelingDynamicBoxConstraint_CanAddCubeAt, (void**)&ModelingDynamicBoxConstraint_CanAddCubeAt_Old) == MH_OK, "[NoLimit] - CreateHook DynamicAdd");
		logger->Assert(MH_CreateHook(*methodVer3, ModelingBoxCountConstraint_CanAddCubeAt, (void**)&ModelingBoxCountConstraint_CanAddCubeAt_Old) == MH_OK, "[NoLimit] - CreateHook BoxAdd");
		logger->Assert(MH_CreateHook(*methodVer4, ModelingBoxCountConstraint_CanRemoveCubeAt, (void**)&ModelingBoxCountConstraint_CanRemoveCubeAt_Old) == MH_OK, "[NoLimit] - CreateHook BoxRemove");

		logger->Assert(MH_EnableHook(*methodVer) == MH_OK, "[NoLimit] - EnableHook Init");
		logger->Assert(MH_EnableHook(*methodVer2) == MH_OK, "[NoLimit] - EnableHook DynamicAdd");
		logger->Assert(MH_EnableHook(*methodVer3) == MH_OK, "[NoLimit] - EnableHook BoxAdd");
		logger->Assert(MH_EnableHook(*methodVer4) == MH_OK, "[NoLimit] - EnableHook BoxRemove");
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
}
