#pragma once
#include <cinttypes>
#include <string>
#include <memory>
namespace KoGaMaTools::Services {
	struct CustomCrossHairTexture {
		inline static bool Enable = false;
		inline static bool Busy = false;
		static void Install();
		static void Render();
		static void SetTexture(const std::string& filePath);
		static void OpenFileDialog();
	};


}