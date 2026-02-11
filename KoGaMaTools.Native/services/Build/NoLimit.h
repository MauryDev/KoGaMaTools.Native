#pragma once
#include <array>
namespace KoGaMaTools::Services::NoLimit {
	inline bool Enable = false;
	using IntVector = std::array<short, 3>;

	

	void ConstraintVisualizer_Init(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo);
	bool ModelingDynamicBoxConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo);
	bool ModelingBoxCountConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo);
	bool ModelingBoxCountConstraint_CanRemoveCubeAt(void* instance, IntVector pos, void* methodInfo);


	void Install();

}