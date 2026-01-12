#pragma once
#include <array>

namespace KoGaMaTools::Services::SinglePaintFace {
	inline bool Enable = false;
	inline void (*OldFunc)(void* instance, void* e, void* methodInfo);
	void PaintCubes_Execute(void* instance, void* e, void* methodInfo);
	void Install();
}