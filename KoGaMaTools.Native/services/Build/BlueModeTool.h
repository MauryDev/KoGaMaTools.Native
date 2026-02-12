#pragma once
#include <cinttypes>
namespace KoGaMaTools::Services {
	struct BlueModeTool {
		inline static bool Enable = true;

		static void OnExecute(void* instance, uint8_t value, void* methodInfo);

		static void Install();
		static void Render();
	};
	

}