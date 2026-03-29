#pragma once
#include <cinttypes>
#include <nlohmann/json.hpp>

namespace KoGaMaTools::Types {
	struct IntVector {
		int16_t X;
		int16_t Y;
		int16_t Z;
		IntVector() : X(0), Y(0), Z(0) {}
		IntVector(int16_t x, int16_t y, int16_t z) : X(x), Y(y), Z(z) {}
		friend void to_json(nlohmann::json& j, const IntVector& intpos);
		friend void from_json(const nlohmann::json& j, IntVector& intpos);

		bool operator==(const IntVector& other);
		auto operator<=>(const IntVector&) const = default;
	};
}