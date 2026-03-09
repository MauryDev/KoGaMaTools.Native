#include "GameInfoService.h"
#include "../Common/MainComponent.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>
#include <imgui.h>
void KoGaMaTools::Services::GameInfoService::Init(Core::DIContainer& di)
{
	Instance = di.Get<GameInfoService>();
	auto component = di.Get<MainComponent>();
	component->AddCallback("GameInfoService_Update", Update);
}

void KoGaMaTools::Services::GameInfoService::Render()
{
    if (ImGui::BeginTable("GameStatsTable", 2, ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg))
    {
        ImGui::TableSetupColumn("Mertric");
        ImGui::TableSetupColumn("Value");
        ImGui::TableHeadersRow();

        auto AddRow = [](const char* label, const char* fmt, ...) {
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::Text("%s", label);
            ImGui::TableNextColumn();

            va_list args;
            va_start(args, fmt);
            ImGui::TextV(fmt, args);
            va_end(args);
            };

        // 3. Adicionar os dados à tabela
        AddRow("Versão", "%s", version.c_str());
        AddRow("FPS", "%.1f", Fps);
        AddRow("Ping", "%d ms", ping);
        AddRow("World Objects", "%d", worldObjects);
        AddRow("Logic Objects", "%d", logicObjects);
        AddRow("Links", "%d", links);
        AddRow("Object Links", "%d", objectlinks);
        AddRow("Unique Models", "%d", models_unique);
        AddRow("Total Models", "%d", models);
        AddRow("Username", "%s", playerName.empty() ? "" : playerName.c_str());

        AddRow("Player ID", "%d", playerId);
        AddRow("Level", "%d", level);
        AddRow("XP", "%d xp", xp);

        ImGui::EndTable();

        ImGui::Separator();

        ImGui::TextUnformatted("Made by MauryDev");
        ImGui::TextUnformatted("Special thanks to Becko, Snowy and RooKie");

    }
}

void KoGaMaTools::Services::GameInfoService::Update(void* ptr)
{
    const std::chrono::milliseconds interval(250);

    
    static auto lastExecutionTime = std::chrono::steady_clock::now();

    auto currentTime = std::chrono::steady_clock::now();

    auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastExecutionTime);

    if (elapsedTime >= interval)
    {
        Instance->GetWorldObjects();
		Instance->GetLogicObjects();
        Instance->GetLinkCount();

        Instance->GetObjectLinkCount();

        Instance->GetUniquePrototypeCount();

        Instance->GetPrototypeCount();

        Instance->GetPing();

        Instance->GetFps();

        Instance->GetPlayerName();
        Instance->GetPlayerId();
        Instance->GetPlayerLevel();
        Instance->GetPlayerXp();
		if (Instance->version.empty())
            Instance->GetVersion();
        lastExecutionTime = currentTime;
    }
}

void KoGaMaTools::Services::GameInfoService::GetWorldObjects()
{
    using namespace KoGaMaAPI::KoGaMa;
    auto wocm = MVGameControllerBase::m_get_WOCM();
	if (wocm.isNull()) return;

	this->worldObjects = MVWorldObjectClientManager::m_get_Count(wocm).Unbox<int>();
}

void KoGaMaTools::Services::GameInfoService::GetLogicObjects()
{
    using namespace KoGaMaAPI::KoGaMa;
    auto wocm = MVGameControllerBase::m_get_WOCM();
    if (wocm.isNull()) return;
	auto worldObjectsObj = MVWorldObjectClientManager::f_worldObjects.Get<Tools::Il2Cpp::Il2CppObject>(wocm);
	if (worldObjectsObj.isNull()) return;

	auto worldObjectsObjValues = Tools::Il2Cpp::ICalls::IDictionary::m_get_Values(worldObjectsObj);
    if (worldObjectsObjValues.isNull()) return;

    auto enumerator = Tools::Il2Cpp::ICalls::IEnumerable::m_GetEnumerator(worldObjectsObjValues);
    if (enumerator.isNull()) return;

    int count = 0;
    while (Tools::Il2Cpp::ICalls::IEnumerator::m_MoveNext(enumerator).Unbox<Tools::Il2Cpp::Il2CppBoolean>())
    {
        auto wo = Tools::Il2Cpp::ICalls::IEnumerator::m_get_Current(enumerator);
        if (wo.isNull()) continue;
        
		if (MVWorldObjectClient::m_get_HasInputConnector(wo).Unbox<Tools::Il2Cpp::Il2CppBoolean>() ||
            MVWorldObjectClient::m_get_HasObjectConnector(wo).Unbox<Tools::Il2Cpp::Il2CppBoolean>() ||
            MVWorldObjectClient::m_get_HasOutputConnector(wo).Unbox<Tools::Il2Cpp::Il2CppBoolean>()
            )
        {
            count++;
        }
    }
	this->logicObjects = count;
}

void KoGaMaTools::Services::GameInfoService::GetLinkCount()
{
    using namespace KoGaMaAPI::KoGaMa;
	auto game = MVGameControllerBase::m_get_Game();

	if (game.isNull()) return;

	auto worldNetwork = MVNetworkGame::m_get_World(game);

	if (worldNetwork.isNull()) return;

	auto links = WorldNetwork::f_links.Get<Tools::Il2Cpp::Il2CppObject>(worldNetwork);

	if (links.isNull()) return;

	auto linksDict = Links::f_links.Get<Tools::Il2Cpp::Il2CppObject>(links);

	if (linksDict.isNull()) return;
	this->links = Tools::Il2Cpp::ICalls::ICollection::m_get_Count(linksDict)
        .Unbox<int>();
}

void KoGaMaTools::Services::GameInfoService::GetObjectLinkCount()
{
    using namespace KoGaMaAPI::KoGaMa;
    auto game = MVGameControllerBase::m_get_Game();

    if (game.isNull()) return;

    auto worldNetwork = MVNetworkGame::m_get_World(game);

    if (worldNetwork.isNull()) return;

    auto objectLinks = WorldNetwork::f_objectLinks.Get<Tools::Il2Cpp::Il2CppObject>(worldNetwork);

    if (objectLinks.isNull()) return;

    auto objectLinksDict = ObjectLinks::f_objectLinks.Get<Tools::Il2Cpp::Il2CppObject>(objectLinks);

    if (objectLinks.isNull()) return;
    this->objectlinks = Tools::Il2Cpp::ICalls::ICollection::m_get_Count(objectLinksDict)
        .Unbox<int>();
}



void KoGaMaTools::Services::GameInfoService::GetUniquePrototypeCount()
{
    using namespace KoGaMaAPI::KoGaMa;
    auto game = MVGameControllerBase::m_get_Game();
    if (game.isNull()) return;

	auto worldNetwork = MVNetworkGame::m_get_World(game);
    if (worldNetwork.isNull()) return;

	auto inventory = World::f_worldInventory.Get<Tools::Il2Cpp::Il2CppObject>(worldNetwork);
    if (inventory.isNull()) return;

    auto ptr = MVWorldInventory::m_get_RuntimePrototypes.ptr;
    
	auto runtimePrototypes = MVWorldInventory::m_get_RuntimePrototypes(inventory);
    if (runtimePrototypes.isNull()) return;

    this->models_unique = Tools::Il2Cpp::ICalls::ICollection::m_get_Count(runtimePrototypes)
        .Unbox<int>();
}

void KoGaMaTools::Services::GameInfoService::GetPrototypeCount()
{
   
	using namespace KoGaMaAPI::KoGaMa;
    int count = 0;
	auto wocm = MVGameControllerBase::m_get_WOCM();
	if (wocm.isNull()) return;

	auto worldObjectsObj = MVWorldObjectClientManager::f_worldObjects.Get<Tools::Il2Cpp::Il2CppObject>(wocm);
    if (worldObjectsObj.isNull()) return;

    auto worldObjectsObjValues = Tools::Il2Cpp::ICalls::IDictionary::m_get_Values(worldObjectsObj);
    if (worldObjectsObjValues.isNull()) return;

    auto enumerator = Tools::Il2Cpp::ICalls::IEnumerable::m_GetEnumerator(worldObjectsObjValues);
    if (enumerator.isNull()) return;

    while (Tools::Il2Cpp::ICalls::IEnumerator::m_MoveNext(enumerator).Unbox<Tools::Il2Cpp::Il2CppBoolean>())
    {
        auto wo = Tools::Il2Cpp::ICalls::IEnumerator::m_get_Current(enumerator);
        if (wo.isNull()) continue;
		auto flag = InteractionFlags::f_HasCubeModel.Get<int64_t>();
        if (MVWorldObjectClient::m_HasInteractionFlag(wo, flag)
            .Unbox<Tools::Il2Cpp::Il2CppBoolean>())
        {
            count++;
        }
    }

	this->models = count;
}

void KoGaMaTools::Services::GameInfoService::GetPing()
{
    using namespace KoGaMaAPI::KoGaMa;

	auto game = MVGameControllerBase::m_get_Game();
    if (game.isNull()) return;

	auto peer = MVNetworkGame::m_get_Peer(game);
    if (peer.isNull()) return;

	this->ping = PhotonPeer::m_get_RoundTripTime(peer).Unbox<int>();
}

void KoGaMaTools::Services::GameInfoService::GetFps()
{
    using namespace KoGaMaAPI::KoGaMa;


	Fps = 1 / UE_Time::m_get_smoothDeltaTime().Unbox<float>();
}

void KoGaMaTools::Services::GameInfoService::GetVersion()
{
    using namespace KoGaMaAPI::KoGaMa;
    auto versionObj = BuildSystem_GameBuildSettings::m_get_VersionString().As<Tools::Il2Cpp::Il2CppString>();
	if (versionObj.isNull()) return;

    this->version = Tools::Il2Cpp::Utils::convert_il2cpstring_to_char_array(versionObj);
}

void KoGaMaTools::Services::GameInfoService::GetPlayerName()
{
    using namespace KoGaMaAPI::KoGaMa;
    if (!this->playerName.empty()) return;

    auto localPlayer = MVGameControllerBase::m_get_LocalPlayer();
    if (localPlayer.isNull()) return;
    auto userProfileData = MVPlayer::m_get_UserProfileData(localPlayer);
    if (userProfileData.isNull()) return;
	auto username = Metadata_UserProfileData::f_UserName.Get<Tools::Il2Cpp::Il2CppString>(userProfileData);
	this->playerName = Tools::Il2Cpp::Utils::convert_il2cpstring_to_char_array(username);
}

void KoGaMaTools::Services::GameInfoService::GetPlayerId()
{
    using namespace KoGaMaAPI::KoGaMa;
	if (this->playerId != -1) return;
    auto localPlayer = MVGameControllerBase::m_get_LocalPlayer();
    if (localPlayer.isNull()) return;
	this->playerId = MVPlayer::m_get_ProfileID(localPlayer)
        .Unbox<int>();

}

void KoGaMaTools::Services::GameInfoService::GetPlayerLevel()
{
    using namespace KoGaMaAPI::KoGaMa;

    auto localPlayer = MVGameControllerBase::m_get_LocalPlayer();
    if (localPlayer.isNull()) return;
    this->level = MVPlayer::m_get_Level(localPlayer)
        .Unbox<int>();
}

void KoGaMaTools::Services::GameInfoService::GetPlayerXp()
{
    using namespace KoGaMaAPI::KoGaMa;

    auto localPlayer = MVGameControllerBase::m_get_LocalPlayer();
    if (localPlayer.isNull()) return;
    auto xpProgressData = MVLocalPlayer::m_get_XPProgressData(localPlayer);
    if (xpProgressData.isNull()) return;

	this->xp = XPProgressData::m_get_XP(xpProgressData).Unbox<int>();
}
