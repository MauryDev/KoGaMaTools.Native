#pragma once
#include "kogama-tools/Core/DITools.h"
#include "kogama-tools/UI/MainUI.h"
#include <kogama-tools/services/Common/MainComponent.h>
#include <kogama-tools/services/IO/IFileService.h>
#include <kogama-tools/UI/ITextureManager.h>
#include <kogama-tools/services/LoggerService.h>

#include "AvatarInfo.h"

namespace KoGaMaTools::Services::AvatarModule
{
	class AvatarService : public UI::MainUI::IComponent,
		public Core::IInitializable
	{
		std::shared_ptr<AvatarInfo> _avatarInfo;
		inline static std::shared_ptr<AvatarService> Instance;
		std::shared_ptr<MainComponent> _mainComponent;
		std::shared_ptr<UI::ITextureManager> textureManager;
		std::shared_ptr<IFileService> fileService;
		std::shared_ptr<LoggerService> loggerService;

		std::atomic<bool> isBusy = false;
		bool RemoveOldWorkpace = true;

		void Init(Core::DIContainer& di) override;
		void Render() override;
		void PasteAvatar();
		void CopyAvatar();
		void ImportAvatar();
		void ExportAvatar();

	};
}