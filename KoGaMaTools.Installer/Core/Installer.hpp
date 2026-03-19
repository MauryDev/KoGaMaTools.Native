#pragma once

#include "IInstaller.hpp"
#include "InstallerState.hpp"


class Installer : public IInstaller {
private:
    InstallerState& state;

public:
    explicit Installer(InstallerState& s);

    void StartInstall(const std::vector<uint8_t>& zipData) override;
};