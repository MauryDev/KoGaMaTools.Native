#pragma once
#include <cinttypes>
#include <memory>
#include "kogama-tools/UI/MainUI.h"
#include "kogama-tools/Core/DITools.h"
#include "kogama-tools/services/Common/ContextMenuService.h"
#include "CubeInfo.h"
#include "CopyModel.h"
#include "kogama-tools/services/Common/MainComponent.h"
#include "kogama-tools/services/Common/TextCommandService.h"
#include <kogama-tools/UI/ITextureManager.h>

namespace KoGaMaTools::Services::ModelModule {
	struct PasteModelService : Core::IInitializable,
		Services::IContextButtonAction,
		Services::ICommandResolve
	{
		inline static std::shared_ptr<PasteModelService> Instance;
		std::shared_ptr<CopyModelService> copyService;
		std::shared_ptr<MainComponent> mainComponent;
		std::shared_ptr<UI::ITextureManager> textureManager;
		bool ReplaceOld = false;
		void* modelCurrent = nullptr;
		bool openPopupRequested = false;


		void Init(Core::DIContainer& di) override;



		// Inherited via IContextMenuAction
		void Execute(Tools::Il2Cpp::Il2CppObject wo) override;

		bool ShouldShow(Tools::Il2Cpp::Il2CppObject wo) override;
		bool PasteCube(Tools::Il2Cpp::Il2CppObject wo);

		static bool PasteCube(Tools::Il2Cpp::Il2CppObject wo, bool replaceOld,std::shared_ptr<std::vector<KoGaMaTools::Services::ModelModule::CubeInfo>> cubes);


		std::string_view GetName() override;


		bool Resolve(TextCommandService::CommandData& command) override;

		std::string_view GetCommandHelp() override;

		void RenderPopup();
		void RequestOpenPopup(void* modelCurrent);
	};
}