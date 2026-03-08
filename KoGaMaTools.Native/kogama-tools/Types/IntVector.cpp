#include "IntVector.h"

void KoGaMaTools::Types::to_json(nlohmann::json& j, const IntVector& info)
{
	j = {
		{"X", info.X},
		{"Y", info.Y},
		{"Z", info.Z}
	};
}
bool KoGaMaTools::Types::IntVector::operator==(const IntVector& other)
{
	return this->X == other.X && this->Y == other.Y && this->Z == other.Z;
}

namespace std {
    template <>
    struct hash<KoGaMaTools::Types::IntVector> {
        std::size_t operator()(const KoGaMaTools::Types::IntVector& r) const noexcept {
            
            std::size_t h1 = std::hash<int16_t>{}(r.X);
            std::size_t h2 = std::hash<int16_t>{}(r.Y);
            std::size_t h3 = std::hash<int16_t>{}(r.Z);

            // A common bit-mixing formula:
            // seed ^= hash_value + 0x9e3779b9 + (seed << 6) + (seed >> 2);

            auto combine = [](std::size_t& seed, std::size_t v) {
                seed ^= v + 0x9e3779b9 + (seed << 6) + (seed >> 2);
                };

            std::size_t res = h1;
            combine(res, h2);
            combine(res, h3);

            return res;
        }
    };
}