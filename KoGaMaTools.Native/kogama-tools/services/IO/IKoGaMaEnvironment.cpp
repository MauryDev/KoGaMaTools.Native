#include "IKoGaMaEnvironment.h"

namespace KoGaMaTools::Services
{
	const std::pair<const char*, IKoGaMaEnvironment::Region> IKoGaMaEnvironment::regionPairs[] = {
		{"BR", IKoGaMaEnvironment::Region::BR },
		{"WWW", IKoGaMaEnvironment::Region::WWW},
		{"Friends", IKoGaMaEnvironment::Region::Friends},
		{"Custom", IKoGaMaEnvironment::Region::Custom}
	};
	IKoGaMaEnvironment::Region IKoGaMaEnvironment::FromStr(const std::string_view& value) const
	{
		for (const auto& entry : regionPairs)
			if (entry.first == value) return entry.second;
		return Region::Custom;
	}
	const char* IKoGaMaEnvironment::RegionToStr(Region region) const
	{
		for (const auto& entry : regionPairs)
			if (entry.second == region) return entry.first;
		return "Custom";
	}

}