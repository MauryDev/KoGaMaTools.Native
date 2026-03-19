#pragma once
#include <string>
#include <cstdint>

class InstallerState {
public:
    std::wstring installPath = L"C:\\KoGaMaTools";
    int selectedPath = 0;

    float progress = 0.0f;
    bool installing = false;
    bool finished = false;

    uint64_t installSize = 0;
    uint64_t freeSpace = 0;
};