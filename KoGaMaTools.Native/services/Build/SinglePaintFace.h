#pragma once
#include <array>

namespace KoGaMaTools::Services {
	struct SinglePaintFace {
		inline static bool Enable = false;
		 static void PaintCubes_Execute(void* instance, void* e, void* methodInfo);
		 static void Install();
		 static void Render();
	};
	
}