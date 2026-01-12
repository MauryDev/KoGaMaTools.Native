#pragma once
#include <windows.h>
#include <filesystem>
#include <string_view>
namespace KoGaMaTools::Services::PathHelper {
	enum class KoGaMaRegion {
		BR,
		WWW,
		Friends,
		Custom
	};
	inline HMODULE moduleDll;
	const std::filesystem::path& GetDllPath();
	const std::filesystem::path& GetFolderWork();
	const std::filesystem::path& GetKoGaMaPath();
	KoGaMaRegion GetRegion();
	KoGaMaRegion FromStr(const std::string_view& value);
	const char* RegionToStr(KoGaMaRegion region);
}