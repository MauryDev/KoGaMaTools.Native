#pragma once
#include <cinttypes>
namespace KoGaMaTools::Services {
	struct DestructiblesUnlock {
		inline static bool Unlock = false;

		static bool IsAvailable(void* instance, void* methodInfo);

		static void Install();
		static void Render();
	};
	

}