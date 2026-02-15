#pragma once
#include "../../Types/Vector4.h"
#include <cinttypes>
namespace KoGaMaTools::Services {
	struct CustomCrossHairColor {
		inline static bool Enable = false;
		inline static Types::Vector4 Color = { 0, 1, 0, 1 };
		static void Install();
		static void OnExecute(void* instance, void* pickupItem);
		static void Render();
	};


}