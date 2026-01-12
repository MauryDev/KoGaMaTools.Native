#include "NoLimit.h"
#include "..\metadata\KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"

namespace KoGaMaTools::Services::NoLimit
{
	namespace {
		bool (*ModelingDynamicBoxConstraint_CanAddCubeAt_Old)(void* instance, IntVector pos, void* methodInfo);
		bool (*ModelingBoxCountConstraint_CanAddCubeAt_Old)(void* instance, IntVector pos, void* methodInfo);
		bool (*ModelingBoxCountConstraint_CanRemoveCubeAt_Old)(void* instance, IntVector pos, void* methodInfo);
		void (*ConstraintVisualizer_Init_Old)(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo);
	}
	void Install()
	{
		auto methodVer = (void**)KoGaMaAPI::KoGaMa::ConstraintVisualizer::m_Init.ptr;
		auto methodVer2 = (void**)KoGaMaAPI::KoGaMa::ModelingDynamicBoxConstraint::m_CanAddCubeAt.ptr;
		auto methodVer3 = (void**)KoGaMaAPI::KoGaMa::ModelingBoxCountConstraint::m_CanAddCubeAt.ptr;
		auto methodVer4 = (void**)KoGaMaAPI::KoGaMa::ModelingBoxCountConstraint::m_CanRemoveCubeAt.ptr;

		MH_CreateHook(*methodVer, ConstraintVisualizer_Init, (void**)&ConstraintVisualizer_Init_Old);
		MH_CreateHook(*methodVer2, ModelingDynamicBoxConstraint_CanAddCubeAt, (void**)&ModelingDynamicBoxConstraint_CanAddCubeAt_Old);
		MH_CreateHook(*methodVer3, ModelingBoxCountConstraint_CanAddCubeAt, (void**)&ModelingBoxCountConstraint_CanAddCubeAt_Old);
		MH_CreateHook(*methodVer4, ModelingBoxCountConstraint_CanRemoveCubeAt, (void**)&ModelingBoxCountConstraint_CanRemoveCubeAt_Old);

		MH_EnableHook(*methodVer);
		MH_EnableHook(*methodVer2);
		MH_EnableHook(*methodVer3);
		MH_EnableHook(*methodVer4);

	}
	void ConstraintVisualizer_Init(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo)
	{
		if (!Enable)
			ConstraintVisualizer_Init_Old(instance, targetCubeModel, constraint, layer, methodInfo);
	}

	bool ModelingDynamicBoxConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Enable)
			return true;
		return ModelingDynamicBoxConstraint_CanAddCubeAt_Old(instance, pos, methodInfo);
	}
	bool ModelingBoxCountConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Enable)
			return true;
		return ModelingBoxCountConstraint_CanAddCubeAt_Old(instance, pos, methodInfo);
	}
	bool ModelingBoxCountConstraint_CanRemoveCubeAt(void* instance, IntVector pos, void* methodInfo)
	{
		if (Enable)
			return true;
		return ModelingBoxCountConstraint_CanRemoveCubeAt_Old(instance, pos, methodInfo);
	}

}
