#pragma once

#include <kogama-tools/services/Common/TextCommandService.h>
#include <kogama-tools/UI/MainUI.h>
#include <kogama-tools/Core/DITools.h>
#include <kogama-tools/services/Common/MainComponent.h>
namespace KoGaMaTools::Services
{
	class LogicRenderService : public ICommandResolve,
		public Core::IInitializable,
		public UI::MainUI::IComponent
	{
	public:
		void Init(Core::DIContainer& di) override;
		void Render() override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
		void EnableRender(bool enable);
	private:
		bool Enabled;
		std::shared_ptr<MainComponent> mainComponent;
		inline static std::shared_ptr<LogicRenderService> Instance;
	};
}