#include "WindowsFileSystem.hpp"

std::wstring WindowsFileSystem::BrowseFolder()
{
    BROWSEINFOW bi = { 0 };
    bi.lpszTitle = L"Select Install Folder";

    LPITEMIDLIST pidl = SHBrowseForFolderW(&bi);
    if (pidl) {
        wchar_t path[MAX_PATH];
        SHGetPathFromIDListW(pidl, path);
        return path;
    }
    return L"";
}

uint64_t WindowsFileSystem::GetFreeDiskSpace(const std::wstring& path)
{
    ULARGE_INTEGER freeBytes;
    if (GetDiskFreeSpaceExW(path.c_str(), &freeBytes, NULL, NULL))
        return freeBytes.QuadPart;

    return 0;
}
