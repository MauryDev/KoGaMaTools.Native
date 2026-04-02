#pragma once
#include <vector>
#include <kogama-tools/services/Build/ModelModule/CubeInfo.h>
namespace KoGaMaTools::Services::AvatarModule
{
	struct AvatarInfo {
		std::vector<KoGaMaTools::Services::ModelModule::CubeInfo> Head, Torso,
			RArm,
			LArm,
			RUpLeg,
			RLowLeg,
			LUpLeg,
			LLowLeg;

		friend void to_json(nlohmann::json& j, const AvatarInfo& info);
		friend void from_json(const nlohmann::json& j, AvatarInfo& info);
	};
}