#include "ResourceLoader.hpp"
#include <windows.h>

std::vector<uint8_t> ResourceLoader::GetResourceBytes(int resourceId)
{
    HMODULE hModule = GetModuleHandle(NULL);

    HRSRC hRes = FindResource(hModule, MAKEINTRESOURCE(resourceId), L"PNG");
    if (!hRes) return {};

    HGLOBAL hData = LoadResource(hModule, hRes);
    if (!hData) return {};

    DWORD size = SizeofResource(hModule, hRes);
    if (size == 0) return {};

    const uint8_t* ptr = static_cast<const uint8_t*>(LockResource(hData));
    if (!ptr) return {};

    return std::vector<uint8_t>(ptr, ptr + size);
}