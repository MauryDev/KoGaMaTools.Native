#pragma once
#include <cinttypes>
#include <array>
#include <memory>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"
#include "../../Types/Quaternion.h"
#include "../../Types/Vector3.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct CustomGrid : UI::MainUI::IComponent,
		Core::IInitializable,
		Services::IConfigurable,
		Services::ICommandResolve

	{
		inline static std::shared_ptr<CustomGrid> Instance;
		bool Enabled = false;
		float GridSize = 1.0f;

		static void Execute(void* instance, void* methodInfo);
		static Types::Vector3 GetClosestGridPoint(Types::Vector3 worldPosition, Types::Quaternion rotation, float gridSize, Types::Vector3 scale, void* methodInfo);

		void Init(Core::DIContainer& diContainer) override;
		void Render() override;
		void LoadConfig(const nlohmann::json& value);

		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;

	};
}