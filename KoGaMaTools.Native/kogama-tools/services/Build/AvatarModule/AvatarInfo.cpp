#include "AvatarInfo.h"


namespace  KoGaMaTools::Services::AvatarModule {
	const std::array<AvatarInfo::AvatarPartNameBinding, 8> AvatarInfo::partsBinding {
		AvatarPartNameBinding{ "Head",  &AvatarInfo::Head },
		AvatarPartNameBinding{ "Torso",   &AvatarInfo::Torso },
		AvatarPartNameBinding{ "RArm",    &AvatarInfo::RArm },
		AvatarPartNameBinding{ "LArm",    &AvatarInfo::LArm },
		AvatarPartNameBinding{ "RUpLeg",  &AvatarInfo::RUpLeg },
		AvatarPartNameBinding{ "RLowLeg", &AvatarInfo::RLowLeg },
		AvatarPartNameBinding{ "LUpLeg",  &AvatarInfo::LUpLeg },
		AvatarPartNameBinding{ "LLowLeg", &AvatarInfo::LLowLeg }
	};
	void to_json(nlohmann::json& j, const AvatarInfo& info)
	{

		for (auto& [name, field] : AvatarInfo::partsBinding)
		{
			j[name] = info.*(field);
		}

	}

	void from_json(const nlohmann::json& j, AvatarInfo& info)
	{
		for (auto& [name, field] : AvatarInfo::partsBinding)
		{
			info.*(field) = j.value(name, std::vector<ModelModule::CubeInfo>{});
		}
	}

}

