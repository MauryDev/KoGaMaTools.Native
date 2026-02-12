#pragma once
#pragma once
#include <array>
namespace KoGaMaTools::Services {
	struct UnlimitedConfig {
		inline static bool Enabled = false, ClampValues = true;
		inline static float MinValue = 0.0f, MaxValue = 1.0f;
		static void Install();
		static void Render();


		static void Initialize1(void* instance, void* key, float value, float minValue, float maxValue);
		static void Initialize2(void* instance, void* key, int value, int minValue, int maxValue);
		static void ProcessLimits(void* instance, auto& value, auto& minValue, auto& maxValue);
	};


}