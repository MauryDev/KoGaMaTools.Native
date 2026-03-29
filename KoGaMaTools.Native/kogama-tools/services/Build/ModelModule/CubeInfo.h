#pragma once
#include "kogama-tools/Types/IntVector.h"
#include <array>
#include <nlohmann/json.hpp>
namespace KoGaMaTools::Services::ModelModule {
	struct CubeInfo {
		Types::IntVector Position;
		std::array<uint8_t, 6> FaceMaterials;
		std::array<uint8_t, 8> Corners;
		friend void to_json(nlohmann::json& j, const CubeInfo& info);
		friend void from_json(const nlohmann::json& j, CubeInfo& info);

	};
}