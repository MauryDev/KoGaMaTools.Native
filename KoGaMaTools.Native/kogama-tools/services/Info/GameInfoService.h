#pragma once
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
namespace KoGaMaTools::Services {

	struct GameInfoService : Core::IInitializable, UI::MainUI::IComponent {

		inline static std::shared_ptr<GameInfoService> Instance;
		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
		void Render() override;
	private:
		static void Update(void* ptr);
		void GetWorldObjects();
		void GetLogicObjects();
		void GetLinkCount();

		void GetObjectLinkCount();

		void GetUniquePrototypeCount();

		void GetPrototypeCount();

		void GetPing();

		void GetFps();
		void GetVersion();

		void GetPlayerName();
		void GetPlayerId();
		void GetPlayerLevel();
		void GetPlayerXp();

		int worldObjects, logicObjects, links, objectlinks, models_unique, models, ping, playerId = -1, level, xp;
		float Fps;
		std::string version, playerName;

	};

	
}