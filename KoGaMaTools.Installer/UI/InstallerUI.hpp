#pragma once

#include "../Core/InstallerState.hpp"
#include "../Core/IInstaller.hpp"
#include "../Services/IFileSystem.hpp"


class InstallerUI {
private:
    InstallerState& state;
    IInstaller& installer;
    IFileSystem& fileSystem;

public:
    InstallerUI(InstallerState& s, IInstaller& i, IFileSystem& fs);
    void Render(const std::vector<uint8_t>& zipData);
};