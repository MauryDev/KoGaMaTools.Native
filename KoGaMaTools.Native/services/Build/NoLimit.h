#pragma once
#include <array>
namespace KoGaMaTools::Services {
	struct NoLimit {
		inline static bool Enable = false;
		using IntVector = std::array<short, 3>;



		static void ConstraintVisualizer_Init(void* instance, void* targetCubeModel, void* constraint, void* layer, void* methodInfo);
		static bool ModelingDynamicBoxConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo);
		static bool ModelingBoxCountConstraint_CanAddCubeAt(void* instance, IntVector pos, void* methodInfo);
		static bool ModelingBoxCountConstraint_CanRemoveCubeAt(void* instance, IntVector pos, void* methodInfo);

		static void Install();

		static void Render();
	};
	

}