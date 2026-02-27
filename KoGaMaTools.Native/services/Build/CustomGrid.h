#pragma once
#include <cinttypes>
#include <array>
#include <memory>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"


namespace KoGaMaTools::Services {
	struct CustomGrid : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable {
		inline static std::shared_ptr<CustomGrid> Instance;
		bool Enabled = false;
		float GridSize = 1.0f;

		static void Execute(void* instance, void* methodInfo);
		static std::array<float, 3> GetClosestGridPoint(std::array<float, 3> worldPosition, std::array<float, 4> rotation, float gridSize, std::array<float, 3> scale, void* methodInfo);

		void Init(Core::DIContainer& diContainer) override;
		void Render() override;
		void LoadConfig(const nlohmann::json& value);

		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;

	};
}