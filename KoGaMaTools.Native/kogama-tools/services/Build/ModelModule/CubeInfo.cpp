#include "CubeInfo.h"

void KoGaMaTools::Services::ModelModule::to_json(nlohmann::json& j, const CubeInfo& info)
{
	j = {
		{"Position", info.Position},
		{"FaceMaterials", info.FaceMaterials},
		{"Corners", info.Corners}
	};

}
