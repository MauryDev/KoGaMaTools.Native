#pragma once
#include "IFileService.h"

namespace KoGaMaTools::Services
{
	class WindowsFileService : public IFileService
	{
		// Inherited via IFileService
		std::string ReadFile(const std::string& path) override;
		bool WriteFile(const std::string& path, const std::string& content) override;
		bool FileExists(const std::string& path) override;
	};

}