#pragma once

#include "IFileSystem.hpp"
#include <windows.h>
#include <shlobj.h>

class WindowsFileSystem : public IFileSystem {
public:
    std::wstring BrowseFolder() override;

    uint64_t GetFreeDiskSpace(const std::wstring& path) override;
    static std::wstring GetKnownFolder(REFKNOWNFOLDERID folderId)
    {
        PWSTR path = nullptr;

        if (SUCCEEDED(SHGetKnownFolderPath(folderId, 0, NULL, &path)))
        {
            std::wstring result(path);
            CoTaskMemFree(path);
            return result;
        }

        return L"";
    }
    static std::wstring GetDocumentsPath() {
        return GetKnownFolder(FOLDERID_Documents);
    }

    static std::wstring GetDesktopPath() {
        return GetKnownFolder(FOLDERID_Desktop);
    }
};