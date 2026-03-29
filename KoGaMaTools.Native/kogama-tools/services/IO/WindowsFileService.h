#pragma once

#include "IFileService.h"
#include <filesystem>

namespace KoGaMaTools::Services {

	class WindowsFileService final : public IFileService
	{
	public:
		WindowsFileService() = default;
		~WindowsFileService() override = default;

		// Texto
		std::optional<std::string> ReadFile(std::string_view path) override;
		bool WriteFile(std::string_view path, std::span<const char> content) override;

		// Binário
		std::optional<std::vector<char>> ReadBinary(std::string_view path) override;
		bool WriteBinary(std::string_view path, std::span<const char> data) override;

		// Utils
		bool Exists(std::string_view path) override;

	private:
		std::filesystem::path ToPath(std::string_view path);
	};

}