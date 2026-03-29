#pragma once
#include <string>
#include <vector>
#include <optional>
#include <span>
#include <kogama-tools/Core/DITools.h>

namespace KoGaMaTools::Services {

	class IFileService : public Core::IBaseService
	{
	public:
		virtual ~IFileService() = default;

		virtual std::optional<std::string> ReadFile(std::string_view path) = 0;
		virtual bool WriteFile(std::string_view path, std::span<const char> content) = 0;

		virtual std::optional<std::vector<char>> ReadBinary(std::string_view path) = 0;
		virtual bool WriteBinary(std::string_view path, std::span<const char> data) = 0;

		virtual bool Exists(std::string_view path) = 0;
	};

}