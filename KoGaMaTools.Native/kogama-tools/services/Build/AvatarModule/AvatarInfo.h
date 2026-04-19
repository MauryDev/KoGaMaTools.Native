#pragma once
#include <vector>
#include <kogama-tools/services/Build/ModelModule/CubeInfo.h>
#include <array>


namespace KoGaMaTools::Services::AvatarModule
{
	struct AvatarInfo {
		struct AvatarPartNameBinding {
			const char* part;
			std::vector<ModelModule::CubeInfo> AvatarInfo::* field;
		};
		std::vector<KoGaMaTools::Services::ModelModule::CubeInfo> Head, Torso,
			RArm,
			LArm,
			RUpLeg,
			RLowLeg,
			LUpLeg,
			LLowLeg;

		friend void to_json(nlohmann::json& j, const AvatarInfo& info);
		friend void from_json(const nlohmann::json& j, AvatarInfo& info);
		static constexpr int PartsCount = 8;
		static const std::array<AvatarPartNameBinding, PartsCount> partsBinding;
	};
}