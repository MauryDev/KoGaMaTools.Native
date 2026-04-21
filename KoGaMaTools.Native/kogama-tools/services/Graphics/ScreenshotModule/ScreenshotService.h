#pragma once
#include <kogama-tools/Core/DITools.h>
#include "kogama-tools/UI/MainUI.h"
#include <kogama-tools/services/Common/MainComponent.h>
#include <kogama-tools/services/IO/IFileService.h>

namespace KoGaMaTools::Services::ScreenshotModule
{
	class ScreenshotService: public Core::IInitializable, public UI::MainUI::IComponent
	{
	public:
		inline static std::shared_ptr<ScreenshotService> Instance;
		std::shared_ptr<MainComponent> _mainComponent;
		std::shared_ptr<IFileService> fileService;
		std::shared_ptr<LoggerService> loggerService;
		std::atomic<bool> IsBusy;
		void Init(Core::DIContainer& di) override;
		void Render() override;
		void SaveScreenshot(const std::string& path);
		void SelectFileToSave();
		void ClosePopup();
		void OpenPopup();
		void RenderPreview();
		void CreateNewPreview();
		void DestroyPreview();
	private:
		int superSize = 1;
		void* texture;
		void* texture2DHandle;
		bool enableHotkey;
	};

	
}