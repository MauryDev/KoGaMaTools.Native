#include "CubeInfo.h"

void KoGaMaTools::Services::ModelModule::to_json(nlohmann::json& j, const CubeInfo& info)
{
	j = {
		{"Position", info.Position},
		{"FaceMaterials", info.FaceMaterials},
		{"Corners", info.Corners}
	};

}

void KoGaMaTools::Services::ModelModule::from_json(const nlohmann::json& j, CubeInfo& info)
{
	info = {
		.Position = j.at("Position").get<Types::IntVector>(),
		.FaceMaterials = j.at("FaceMaterials").get<std::array<uint8_t, 6>>(),
		.Corners = j.at("Corners").get<std::array<uint8_t, 8>>()
	};

}
