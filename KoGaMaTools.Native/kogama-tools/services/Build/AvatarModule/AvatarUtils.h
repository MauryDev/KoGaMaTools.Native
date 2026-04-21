#pragma once
#include <Tools.Il2Cpp.Lib.h>
#include "AvatarInfo.h"
#include <kogama-tools/services/Common/MainComponent.h>
namespace KoGaMaTools::Services::AvatarModule::AvatarUtils
{
	
	Tools::Il2Cpp::Il2CppObject GetCurrentAvatar();

	bool IsOwner(Tools::Il2Cpp::Il2CppObject body);


	AvatarInfo GetAvatarInfo(Tools::Il2Cpp::Il2CppObject avatar);
	KoGaMaTools::Services::MainComponent::TaskCoroutine PasteAvatarCoro(Tools::Il2Cpp::Il2CppObject bodyAvatar, bool replaceOld, const AvatarInfo& avatarInfo);
	KoGaMaTools::Services::MainComponent::TaskCoroutine PasteAvatarCoro(Tools::Il2Cpp::Il2CppObject bodyAvatar, bool replaceOld, std::shared_ptr<AvatarInfo> avatarInfo);

	Tools::Il2Cpp::Il2CppObject GetAvatarPart(Tools::Il2Cpp::Il2CppObject body, const char* namePart);
}