#pragma once
#include <cinttypes>
namespace KoGaMaTools::Services {
	struct FastRespawn {
		inline static bool Enable = false;
		static void Install();
		static void Render();
		static bool OnExecute(void* instance);

		static void OnUpdate(void* instance);

	};


}