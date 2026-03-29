#include "WindowsFileService.h"

#include <fstream>
#include <sstream>

namespace KoGaMaTools::Services {

	std::filesystem::path WindowsFileService::ToPath(std::string_view path)
	{
		return std::filesystem::path(path);
	}

	// =========================
	// TEXT
	// =========================

	std::optional<std::string> WindowsFileService::ReadFile(std::string_view path)
	{
		std::ifstream file(ToPath(path), std::ios::in);

		if (!file.is_open())
			return std::nullopt;

		std::stringstream buffer;
		buffer << file.rdbuf();

		return buffer.str();
	}

	bool WindowsFileService::WriteFile(std::string_view path, std::span<const char> content)
	{
		std::ofstream file(ToPath(path), std::ios::out | std::ios::trunc);

		if (!file.is_open())
			return false;

		file.write(content.data(), static_cast<std::streamsize>(content.size()));

		return file.good();
	}

	// =========================
	// BINARY
	// =========================

	std::optional<std::vector<char>> WindowsFileService::ReadBinary(std::string_view path)
	{
		std::ifstream file(ToPath(path), std::ios::binary | std::ios::ate);

		if (!file.is_open())
			return std::nullopt;

		std::streamsize size = file.tellg();
		if (size < 0)
			return std::nullopt;

		file.seekg(0, std::ios::beg);

		std::vector<char> buffer(static_cast<size_t>(size));

		if (!file.read(buffer.data(), size))
			return std::nullopt;

		return buffer;
	}

	bool WindowsFileService::WriteBinary(std::string_view path, std::span<const char> data)
	{
		std::ofstream file(ToPath(path), std::ios::binary | std::ios::trunc);

		if (!file.is_open())
			return false;

		file.write(data.data(), static_cast<std::streamsize>(data.size()));

		return file.good();
	}

	// =========================
	// UTILS
	// =========================

	bool WindowsFileService::Exists(std::string_view path)
	{
		return std::filesystem::exists(ToPath(path));
	}

}