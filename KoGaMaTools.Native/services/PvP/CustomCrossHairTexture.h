#pragma once
#include <cinttypes>
#include <string>
#include <memory>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct CustomCrossHairTexture : UI::MainUI::IComponent, Core::IInitializable, Services::ICommandResolve {
		inline static std::shared_ptr<CustomCrossHairTexture> Instance;
		bool Enabled = false;
		bool Busy = false;
		void Render() override;
		void SetTexture(const std::string& filePath);
		void OpenFileDialog();

		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
		bool Resolve(TextCommandService::CommandData& command) override;
	};


}