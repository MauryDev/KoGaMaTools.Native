#include "AvatarInfo.h"

void KoGaMaTools::Services::AvatarModule::to_json(nlohmann::json& j, const AvatarInfo& info)
{
	j = nlohmann::json{
		{"Head", info.Head},
		{"Torso", info.Torso},
		{"RArm", info.RArm},
		{"LArm", info.LArm},
		{"RUpLeg", info.RUpLeg},
		{"RLowLeg", info.RLowLeg},
		{"LUpLeg", info.LUpLeg},
		{"LLowLeg", info.LLowLeg}
	};

}

void KoGaMaTools::Services::AvatarModule::from_json(const nlohmann::json& j, AvatarInfo& info)
{
	info = AvatarInfo{
		.Head = j.value("Head", std::vector<ModelModule::CubeInfo>{}),
		.Torso = j.value("Torso", std::vector<ModelModule::CubeInfo>{}),
		.RArm = j.value("RArm", std::vector<ModelModule::CubeInfo>{}),
		.LArm = j.value("LArm", std::vector<ModelModule::CubeInfo>{}),
		.RUpLeg = j.value("RUpLeg", std::vector<ModelModule::CubeInfo>{}),
		.RLowLeg = j.value("RLowLeg", std::vector<ModelModule::CubeInfo>{}),
		.LUpLeg = j.value("LUpLeg", std::vector<ModelModule::CubeInfo>{}),
		.LLowLeg = j.value("LLowLeg", std::vector<ModelModule::CubeInfo>{})
	};
}
