#pragma once
#pragma once
#include <array>
namespace KoGaMaTools::Services {
	struct RotationStep {
		inline static bool Enable = false;
		inline static float Step = 15.0f;
		static void Install();
		static void RotateStep_Detour(void* instance, int rotationMode, float rotationSpeed);
		static void Render();
	};


}