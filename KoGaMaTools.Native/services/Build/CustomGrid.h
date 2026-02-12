#pragma once
#pragma once
#include <cinttypes>
#include <array>
namespace KoGaMaTools::Services {
	struct CustomGrid {
		inline static bool Enabled = false;
		inline static float GridSize = 1.0f;
		static void Execute(void* instance, void* methodInfo);
		static std::array<float, 3> GetClosestGridPoint(std::array<float, 3> worldPosition, std::array<float, 4> rotation, float gridSize, std::array<float, 3> scale, void* methodInfo);

		static void Install();
		static void Render();
	};
	
	

}