#pragma once
#include <kogama-tools/Core/DITools.h>
#include <kogama-tools/services/Common/TextCommandService.h>
#include <kogama-tools/UI/MainUI.h>
#include <kogama-tools/services/Common/MainComponent.h>
#include <kogama-tools/UI/ITextureManager.h>
namespace KoGaMaTools::Services
{
	class FogService : public KoGaMaTools::Core::IInitializable,
		public Services::ICommandResolve,
		public UI::MainUI::IComponent
	{
		inline static std::shared_ptr<FogService> Instance;
		std::shared_ptr<MainComponent> mainComponent;
		std::shared_ptr<UI::ITextureManager> textureManager;
		bool Enabled = true;
	public:
		
		void Init(Core::DIContainer& di) override;
		void Render() override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
	private:
		void SetFog();
	};
}