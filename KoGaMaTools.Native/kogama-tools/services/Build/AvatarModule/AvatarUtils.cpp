#include "AvatarUtils.h"
#include <kogama-tools/services/Build/ModelModule/ModelUtils.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>
namespace KoGaMaTools::Services::AvatarModule::AvatarUtils  {


    Tools::Il2Cpp::Il2CppObject GetCurrentAvatar()
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

    bool IsOwner(Tools::Il2Cpp::Il2CppObject body)
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
        GetAvatarInfo(Tools::Il2Cpp::Il2CppObject avatar)
    {
        namespace K = KoGaMaAPI::KoGaMa;
        AvatarInfo ret;

        auto getPartInfo = [&](const char* partName)
            {
                auto part = GetAvatarPart(avatar, partName);
                return ModelModule::ModelUtils::GetCubesInfo(part);
            };
        for (auto& [name, field] : AvatarInfo::partsBinding)
        {
            ret.*(field) = getPartInfo(name);
        }


        return ret;
    }

    KoGaMaTools::Services::MainComponent::TaskCoroutine PasteAvatarCoro(Tools::Il2Cpp::Il2CppObject bodyAvatar, bool replaceOld, const AvatarInfo& avatarInfo)
    {
        namespace K = KoGaMaAPI::KoGaMa;


        for (auto& [name, field] : AvatarInfo::partsBinding)
        {
            auto part = GetAvatarPart(bodyAvatar, name);

            auto& partAvatarInfo = avatarInfo.*(field);

            auto task = ModelModule::ModelUtils::PasteCubeCoro(part, replaceOld, partAvatarInfo);
            while (task.next()) co_yield{};


        }
    }

    KoGaMaTools::Services::MainComponent::TaskCoroutine PasteAvatarCoro(Tools::Il2Cpp::Il2CppObject bodyAvatar, bool replaceOld, std::shared_ptr<AvatarInfo> avatarInfo)
    {
        auto task = PasteAvatarCoro(bodyAvatar, replaceOld, *avatarInfo);
        while (task.next()) co_yield{};
    }

    Tools::Il2Cpp::Il2CppObject GetAvatarPart(Tools::Il2Cpp::Il2CppObject body, const char* namePart)
    {
        namespace K = KoGaMaAPI::KoGaMa;

        auto partStr = Tools::Il2Cpp::Il2CppString::New(namePart);
        return K::MVBody::m_GetBodyPart(body, partStr);
    }
}





