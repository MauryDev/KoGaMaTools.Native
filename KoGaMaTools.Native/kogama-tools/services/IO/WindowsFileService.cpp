#include "WindowsFileService.h"

#include <fstream>
#include <sstream>
#include <filesystem>

std::string KoGaMaTools::Services::WindowsFileService::ReadFile(const std::string& path)
{
    std::ifstream file(path, std::ios::binary | std::ios::ate);
    if (!file)
        return {};

    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::string buffer(size, '\0');
    if (!file.read(buffer.data(), size))
        return {};

    return buffer;
}

bool KoGaMaTools::Services::WindowsFileService::WriteFile(const std::string& path, const std::string& content)
{
    std::ofstream file(path, std::ios::binary);
    if (!file)
        return false;

    file.write(content.data(), static_cast<std::streamsize>(content.size()));
    return file.good();
}

bool KoGaMaTools::Services::WindowsFileService::FileExists(const std::string& path)
{
    return std::filesystem::exists(path) && std::filesystem::is_regular_file(path);
}