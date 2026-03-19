#pragma once
#include <string>
#include <cstdint>

class IFileSystem {
public:
    virtual ~IFileSystem() = default;

    virtual std::wstring BrowseFolder() = 0;
    virtual uint64_t GetFreeDiskSpace(const std::wstring& path) = 0;
};