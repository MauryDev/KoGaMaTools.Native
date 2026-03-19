#include "Installer.hpp"
#include "../Services/ZipManager.hpp"
#include <thread>

Installer::Installer(InstallerState& s) : state(s) {}

void Installer::StartInstall(const std::vector<uint8_t>& zipData)
{
    state.installing = true;
    state.progress = 0.0f;

    std::thread([this, zipData]() {
        for (int i = 0; i <= 100; i++) {
            this->state.progress = i / 100.0f;
            Sleep(20);
        }

        ZipManager::Extract(zipData, this->state.installPath);

        state.finished = true;
        state.installing = false;
        }
    ).detach();
}