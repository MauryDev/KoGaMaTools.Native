#include "AvatarUtils.h"
#include <kogama-tools/services/Build/ModelModule/ModelUtils.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>
Tools::Il2Cpp::Il2CppObject KoGaMaTools::Services::AvatarModule::AvatarUtils::GetCurrentAvatar()
{
	namespace K = KoGaMaAPI::KoGaMa;
    auto instance = K::AvatarSelectionController::f_instance.Get<Tools::Il2Cpp::Il2CppObject>();
	if (instance.isNull())
        return nullptr;

    auto avatarBodyController = K::AvatarSelectionController::f_avatarBodyController.Get<Tools::Il2Cpp::Il2CppObject>(instance);
    if (avatarBodyController.isNull())
        return nullptr;

	return K::AvatarEditModeBodyController::m_get_CurrentBody(avatarBodyController);
}

bool KoGaMaTools::Services::AvatarModule::AvatarUtils::IsOwner(Tools::Il2Cpp::Il2CppObject body)
{
    namespace K = KoGaMaAPI::KoGaMa;

	auto woId = K::MVWorldObject::m_get_Id(body).Unbox<int>();
    auto game = K::MVGameControllerBase::m_get_Game();

    if (game.isNull())
		return false;
	auto avatarMetaDataWoMap = K::MVNetworkGame::m_get_AvatarMetaDataWoMap(game);
    if (avatarMetaDataWoMap.isNull())
        return false;

	void** avatarMetaData;
    if (K::MvAvatarMetaDataWoMap::m_TryGetValue(avatarMetaDataWoMap, woId, avatarMetaData)
        .Unbox<bool>())
    {
        auto result = K::MvAvatarMetaData::f_canBeSoldOnMarketPlace.Get<uint8_t>(avatarMetaData) & 0x1;

        return result != 0;
    }

    return false;
}

KoGaMaTools::Services::AvatarModule::AvatarInfo
KoGaMaTools::Services::AvatarModule::AvatarUtils::GetAvatarInfo(Tools::Il2Cpp::Il2CppObject avatar)
{
    namespace K = KoGaMaAPI::KoGaMa;
    AvatarInfo ret;

    auto getPartInfo = [&](const char* partName)
    {
        auto part = GetAvatarPart(avatar, partName);
        return ModelModule::ModelUtils::GetCubesInfo(part);
    };

    ret.Head = getPartInfo("Head");
    ret.Torso = getPartInfo("Torso");
    ret.RArm = getPartInfo("RArm");
    ret.LArm = getPartInfo("LArm");
    ret.RUpLeg = getPartInfo("RUpLeg");
    ret.RLowLeg = getPartInfo("RLowLeg");
    ret.LUpLeg = getPartInfo("LUpLeg");
    ret.LLowLeg = getPartInfo("LLowLeg");

    return ret;
}

KoGaMaTools::Services::MainComponent::TaskCoroutine KoGaMaTools::Services::AvatarModule::AvatarUtils::PasteAvatarCoro(Tools::Il2Cpp::Il2CppObject bodyAvatar, bool replaceOld, const AvatarInfo& avatarInfo)
{
    namespace K = KoGaMaAPI::KoGaMa;
    
    const auto parts = {
        std::pair{"Head",    std::cref(avatarInfo.Head)},
        std::pair{"Torso",   std::cref(avatarInfo.Torso)},
        std::pair{"RArm",    std::cref(avatarInfo.RArm)},
        std::pair{"LArm",    std::cref(avatarInfo.LArm)},
        std::pair{"RUpLeg",  std::cref(avatarInfo.RUpLeg)},
        std::pair{"RLowLeg", std::cref(avatarInfo.RLowLeg)},
        std::pair{"LUpLeg",  std::cref(avatarInfo.LUpLeg)},
        std::pair{"LLowLeg", std::cref(avatarInfo.LLowLeg)}
    };


    for (auto& [name, data] : parts)
    {
        auto part = GetAvatarPart(bodyAvatar, name);
        auto task = ModelModule::ModelUtils::PasteCubeCoro(part, replaceOld, data.get());

        while (task.next())
            co_yield{};
    }
}

Tools::Il2Cpp::Il2CppObject KoGaMaTools::Services::AvatarModule::AvatarUtils::GetAvatarPart(Tools::Il2Cpp::Il2CppObject body, const char* namePart)
{
    namespace K = KoGaMaAPI::KoGaMa;

    auto partStr = Tools::Il2Cpp::Il2CppString::New(namePart);
    return K::MVBody::m_GetBodyPart(body, partStr);
}
