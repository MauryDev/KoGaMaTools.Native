#include "InstallerUI.hpp"
#include <Windows.h>
#include "../Utils/Format.hpp"
#include <imgui.h>
#include "../Services/WindowsFileSystem.hpp"

InstallerUI::InstallerUI(InstallerState& s, IInstaller& i, IFileSystem& fs) : state(s), installer(i), fileSystem(fs) {}


void InstallerUI::Render(const std::vector<uint8_t>& zipData)
{
    ImGui::Text("Install Size: %s", Format::Size(state.installSize).c_str());
    ImGui::Text("Free Space: %s", Format::Size(state.freeSpace).c_str());

    ImGui::Separator();

    ImGui::Text("Select Install Location:");

    if (ImGui::RadioButton("Documents", state.selectedPath == 0)) {
        state.selectedPath = 0;

        state.installPath = WindowsFileSystem::GetDocumentsPath() + L"\\KoGaMaTools";
    }

    if (ImGui::RadioButton("Desktop", state.selectedPath == 1)) {
        state.selectedPath = 1;
        
        state.installPath = WindowsFileSystem::GetDesktopPath() + L"\\KoGaMaTools";
    }

    if (ImGui::RadioButton("Custom", state.selectedPath == 2)) {
        state.selectedPath = 2;
    }

    char buffer[260];
    size_t c{};
    wcstombs_s(&c, buffer, state.installPath.c_str(), 260);

    if (ImGui::InputText("Folder", buffer, 260)) {
        state.installPath = std::wstring(buffer, buffer + strlen(buffer));
    }

    ImGui::SameLine();
    if (ImGui::Button("Browse")) {
        state.installPath = fileSystem.BrowseFolder();
    }

    if (!state.installing && !state.finished) {
        if (ImGui::Button("Install")) {
            installer.StartInstall(zipData);
        }

        ImGui::SameLine();
        if (ImGui::Button("Cancel")) {
            PostQuitMessage(0);
        }
    }

    if (state.installing) {
        ImGui::ProgressBar(state.progress);
        ImGui::Text("Installing...");
    }

    if (state.finished) {
        ImGui::TextColored(ImVec4(0, 1, 0, 1), "Installation Complete!");
    }

    
}