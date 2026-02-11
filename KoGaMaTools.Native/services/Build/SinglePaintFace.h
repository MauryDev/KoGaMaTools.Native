#pragma once
#include <array>

namespace KoGaMaTools::Services::SinglePaintFace {
	inline bool Enable = false;
	void PaintCubes_Execute(void* instance, void* e, void* methodInfo);
	void Install();
}