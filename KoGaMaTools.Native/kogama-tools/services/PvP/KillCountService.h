#pragma once
#include <kogama-tools/Core/DITools.h>
#include <kogama-tools/UI/MainUI.h>
#include <kogama-tools/services/Common/TextCommandService.h>
#include <kogama-tools/UI/ITextureManager.h>

namespace KoGaMaTools::Services
{
	class KillCountService : public Core::IInitializable,
		public UI::MainUI::IComponent,
		public Services::ICommandResolve
	{

	private:
		static inline std::shared_ptr<KillCountService> Instance;
		std::shared_ptr<UI::ITextureManager> textureManager;
		bool showKillCount = false;
		static bool Detour_TryGetPrioritizedWinCondition(int* condition);
	public:
		void Init(Core::DIContainer& di) override;
		void Render() override;

		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;


	};
}