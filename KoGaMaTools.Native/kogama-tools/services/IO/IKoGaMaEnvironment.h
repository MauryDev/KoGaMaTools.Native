#pragma once
#include <filesystem>
#include <string_view>
#include <kogama-tools/Core/DITools.h>
namespace KoGaMaTools::Services
{
	class IKoGaMaEnvironment: public Core::IBaseService {
	public:
		enum class Region {
			BR,
			WWW,
			Friends,
			Custom
		};
		static const std::pair<const char*, Region> regionPairs[4];

		virtual const std::filesystem::path& GetDllPath() const = 0;
		virtual const std::filesystem::path& GetFolderWork() const = 0;
		virtual const std::filesystem::path& GetKoGaMaPath() const = 0;
		virtual Region GetRegion() const = 0;
		Region FromStr(const std::string_view& value) const;
		const char* RegionToStr(Region region) const;
		virtual ~IKoGaMaEnvironment() = default;
	};
}