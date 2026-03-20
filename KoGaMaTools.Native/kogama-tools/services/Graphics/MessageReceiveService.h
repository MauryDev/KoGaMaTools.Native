#pragma once

#include <kogama-tools/services/Common/TextCommandService.h>
#include <kogama-tools/UI/MainUI.h>
#include <kogama-tools/Core/DITools.h>
#include <kogama-tools/UI/ITextureManager.h>
namespace KoGaMaTools::Services
{
	class MessageReceiveService : public ICommandResolve,
		public Core::IInitializable,
		public UI::MainUI::IComponent
	{
	public:
		void Init(Core::DIContainer& di) override;
		void Render() override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
	private:
		bool Enabled;
		std::shared_ptr<UI::ITextureManager> textureManager;
		inline static std::shared_ptr<MessageReceiveService> Instance;

		static void OnMessageReceived(int msgType, void* dictMessage);
	};
}