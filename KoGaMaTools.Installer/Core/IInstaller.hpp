#pragma once
#include <vector>
#include <cstdint>

class IInstaller {
public:
    virtual ~IInstaller() = default;

    virtual void StartInstall(const std::vector<uint8_t>& zipData) = 0;
};