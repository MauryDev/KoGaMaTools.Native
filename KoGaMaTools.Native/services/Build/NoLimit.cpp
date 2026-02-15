#include "NoLimit.h"
#include "..\..\metadata\KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"
#include <imgui.h>
#include "../LoggerService.h"

namespace KoGaMaTools::Services
{
	namespace {
		bool (*ModelingDynamicBoxConstraint_CanAddCubeAt_Old)(void* instance, NoLimit::IntVector pos, void* methodInfo);
		bool (*ModelingBoxCountConstraint_CanAddCubeAt_Old)(void* instance, NoLimit::IntVector pos, void* methodInfo);
		bool (*ModelingBoxCountConstraint_CanRemoveCubeAt_Old)(void* instance, NoLimit::IntVector pos, void* methodInfo);
		void (*ConstraintVisualizer_Init_Old)(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo);
	}
	void NoLimit::Install()
	{
		auto logger = LoggerService::GetMainTest();

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
		ImGui::Checkbox("No Limit", &Enable);

	}
	void NoLimit::ConstraintVisualizer_Init(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo)
	{
		if (!Enable)
			ConstraintVisualizer_Init_Old(instance, targetCubeModel, constraint, layer, methodInfo);
	}

	bool NoLimit::ModelingDynamicBoxConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Enable)
			return true;
		return ModelingDynamicBoxConstraint_CanAddCubeAt_Old(instance, pos, methodInfo);
	}
	bool NoLimit::ModelingBoxCountConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Enable)
			return true;
		return ModelingBoxCountConstraint_CanAddCubeAt_Old(instance, pos, methodInfo);
	}
	bool NoLimit::ModelingBoxCountConstraint_CanRemoveCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Enable)
			return true;
		return ModelingBoxCountConstraint_CanRemoveCubeAt_Old(instance, pos, methodInfo);
	}

}
