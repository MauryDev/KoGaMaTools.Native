#pragma once
#pragma once
#include <cinttypes>
#include <array>
namespace KoGaMaTools::Services {
	struct EditModeSpeed {
		inline static bool MultiplierEnabled = false, MovementConstrained = true;
		inline static float Multiplier = 1.0f;

		static void MoveCharacter(void* instance, std::array<float,3> moveDelta, void* methodInfo);

		static void Install();

		static void Render();
	};



}