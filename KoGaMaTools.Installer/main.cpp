#include "Core/InstallerState.hpp"
#include "Core/Installer.hpp"
#include "Services/WindowsFileSystem.hpp"
#include "UI/InstallerUI.hpp"
#include "Services/ZipManager.hpp"

#include "UI/Window.h"

int APIENTRY wWinMain(
    HINSTANCE hInstance,
    HINSTANCE,
    LPWSTR,
    int)
{
    InstallerState state;
    WindowsFileSystem fileSystem;
    Installer installer(state);
    static InstallerUI ui(state, installer, fileSystem);

    static std::vector<uint8_t> zipData;
    ZipManager::LoadFromResource(zipData);

    state.installSize = zipData.size();
    state.freeSpace = fileSystem.GetFreeDiskSpace(L"C:\\");

    KoGaMa_Model::UI::Window window{};
    static bool done = false;
    static bool popen = true;
    static ImVec2 lastSize{};
    window.OnRender = [](KoGaMa_Model::UI::Window* that)
        {
            static bool first = true;

            if (first)
            {
                first = false;

                ImGui::SetNextWindowPos(ImVec2(0, 0));
                ImGui::SetNextWindowSize(ImVec2(700, 400));
            }

            ImGui::Begin("KoGaMa Installer", &popen,
                ImGuiWindowFlags_NoMove |
                ImGuiWindowFlags_NoCollapse);

            if (ImGui::Button("Minimizar"))
            {
                ShowWindow(that->hwnd, SW_MINIMIZE);
            }

            ImGui::Spacing();

            ui.Render(zipData);


            auto curSize = ImGui::GetWindowSize();
            if (curSize.x != lastSize.x || curSize.y != lastSize.y) {
                RECT rect; GetWindowRect(that->hwnd, &rect);
                auto pos = ImGui::GetWindowPos();
                SetWindowPos(that->hwnd, NULL, rect.left + pos.x, rect.top + pos.y, static_cast<int>(curSize.x), static_cast<int>(curSize.y), SWP_NOZORDER | SWP_NOACTIVATE);
                lastSize = curSize; ImGui::SetWindowPos(ImVec2(0, 0));
            }

            ImGui::End();
        };

    if (!window.CreateUI()) return -1;

    window.SetupUI();
    window.SetupPlatform();

    ImVec4 clear_color = ImVec4(0, 0, 0, 0);

    while (!done && popen)
    {
        if (!window.BeforeRender(done))
            continue;

        window._OnRender();
        window.EndRender(clear_color);
    }

    window.Cleanup();
    return 0;
}