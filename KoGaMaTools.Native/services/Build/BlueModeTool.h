#pragma once
#include <cinttypes>
namespace KoGaMaTools::Services::BlueModeTool {
	inline bool Enable = true;

	void OnExecute(void* instance, uint8_t value, void* methodInfo);

	void Install();

}