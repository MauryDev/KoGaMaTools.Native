#pragma once
#include <cinttypes>
#include <memory>
#include "kogama-tools/UI/MainUI.h"
#include "kogama-tools/Core/DITools.h"
#include "PasteModel.h"
#include "CopyModel.h"
#include <kogama-tools/services/Common/MainComponent.h>

namespace KoGaMaTools::Services::ModelModule {
	struct ModelService : UI::MainUI::IComponent,
		Core::IInitializable
	{
		inline static std::shared_ptr<ModelService> Instance;
		std::shared_ptr<CopyModelService> copyService;
		std::shared_ptr<PasteModelService> pasteService;
		std::shared_ptr<MainComponent> mainComponent;

		void Init(Core::DIContainer& di) override;
		void Render() override;
		void UI_CopyModel();
		void UI_PasteModel();



	};
}