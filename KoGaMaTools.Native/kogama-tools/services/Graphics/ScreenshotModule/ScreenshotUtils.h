#pragma once
#include "Structs.h"
#include <d3d11.h>
namespace KoGaMaTools::Services::ScreenshotModule::ScreenshotUtils {

	void* Create(int width, int height);
	ResolutionSize GetScreenSize();
	void* CreateShaderTexture(void* texture);
	void FreeShaderTexture(void* shader);
	void* SaveInArray(void* texture);
}