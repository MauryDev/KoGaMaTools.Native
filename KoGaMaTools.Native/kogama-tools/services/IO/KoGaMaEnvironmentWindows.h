#pragma once
#include "IKoGaMaEnvironment.h"
#include <Windows.h>

namespace KoGaMaTools::Services {
	class KoGaMaEnvironmentWindows: public IKoGaMaEnvironment {
		HMODULE ModuleDll;
	public:

		KoGaMaEnvironmentWindows(HMODULE moduleDll);
		const std::filesystem::path& GetDllPath() const override;
		const std::filesystem::path& GetFolderWork() const override;
		const std::filesystem::path& GetKoGaMaPath() const override;
		Region GetRegion() const override;

	};
}