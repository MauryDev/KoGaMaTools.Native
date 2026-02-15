#pragma once
#include <cinttypes>
namespace KoGaMaTools::Services {
	struct AntiAfk {
		inline static bool Enable = false;
		static void Install();
		static void Render();
	};


}