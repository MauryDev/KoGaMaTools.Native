#pragma once
#include <string>
#include <kogama-tools/Core/DITools.h>

namespace KoGaMaTools::Services {
	class IFileService: public Core::IBaseService
	{
	public:
		virtual ~IFileService() = default;
		virtual std::string ReadFile(const std::string& path) = 0;
		virtual bool WriteFile(const std::string& path, const std::string& content) = 0;
		virtual bool FileExists(const std::string& path) = 0;
	};
}