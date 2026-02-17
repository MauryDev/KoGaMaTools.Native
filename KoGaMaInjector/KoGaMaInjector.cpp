#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
#include <thread>
#include <chrono>
#include <windows.h>
#include <tlhelp32.h>
#include <cpr/cpr.h>
#include <libzippp/libzippp.h>
#include <atomic>
#include <cstdio>
#include "Resources/resource.h"

#define WM_TRAYICON (WM_USER + 1)
#define ID_TRAY_EXIT 1001
#define ID_TRAY_TOGGLE_CONSOLE 1002
#define ID_TRAY_TOGGLE_NOTIFY 1003

namespace fs = std::filesystem;

// Global State Variables
NOTIFYICONDATA nid = { 0 };
HWND g_hConsole = NULL;
std::atomic<bool> g_Running(true);
std::atomic<bool> g_ShowConsole(false);
std::atomic<bool> g_NotifyOnInject(true);

// --- UI Helper Functions ---

void InitConsole() {
    AllocConsole();
    FILE* fDummy;
    freopen_s(&fDummy, "CONOUT$", "w", stdout);
    freopen_s(&fDummy, "CONOUT$", "w", stderr);
    freopen_s(&fDummy, "CONIN$", "r", stdin);
    std::cout.clear();
    std::cerr.clear();
    std::cin.clear();

    // Configure title
    SetConsoleTitle(L"KoGaMa Injector");

    // Get handle of the newly created console window
    g_hConsole = GetConsoleWindow();
}

void ToggleConsole() {
    g_ShowConsole = !g_ShowConsole;
    if (g_ShowConsole) {
        if (g_hConsole) {
            ShowWindow(g_hConsole, SW_SHOW);
            SetForegroundWindow(g_hConsole);
        }
    }
    else {
        if (g_hConsole) {
            ShowWindow(g_hConsole, SW_HIDE);
        }
    }
}

void ShowBalloonTip(const std::wstring& title, const std::wstring& msg) {
    if (!g_NotifyOnInject) return;

    nid.uFlags |= NIF_INFO;
    wcsncpy_s(nid.szInfoTitle, title.c_str(), _TRUNCATE);
    wcsncpy_s(nid.szInfo, msg.c_str(), _TRUNCATE);
    nid.dwInfoFlags = NIIF_INFO; // Info Icon
    Shell_NotifyIcon(NIM_MODIFY, &nid);
}

// --- Original Logic Functions ---

std::string ReadConfig(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    if (file.is_open()) {
        std::getline(file, line);
        // Simple trim
        if (!line.empty()) {
            size_t first = line.find_first_not_of(" \t\n\r");
            if (first != std::string::npos) {
                size_t last = line.find_last_not_of(" \t\n\r");
                line = line.substr(first, (last - first + 1));
            }
        }
        file.close();
    }
    return line;
}

DWORD GetProcessIdByName(const std::wstring& processName) {
    PROCESSENTRY32W entry;
    entry.dwSize = sizeof(PROCESSENTRY32W);

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snapshot == INVALID_HANDLE_VALUE) return 0;

    if (Process32FirstW(snapshot, &entry)) {
        do {
            if (processName == entry.szExeFile) {
                CloseHandle(snapshot);
                return entry.th32ProcessID;
            }
        } while (Process32NextW(snapshot, &entry));
    }

    CloseHandle(snapshot);
    return 0;
}

bool IsModuleLoaded(DWORD pid, const std::wstring& moduleName) {
    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid);
    if (snapshot == INVALID_HANDLE_VALUE) return false;

    MODULEENTRY32W entry;
    entry.dwSize = sizeof(MODULEENTRY32W);

    if (Module32FirstW(snapshot, &entry)) {
        do {
            if (moduleName == entry.szModule) {
                CloseHandle(snapshot);
                return true;
            }
        } while (Module32NextW(snapshot, &entry));
    }

    CloseHandle(snapshot);
    return false;
}

bool InjectDLL(DWORD pid, const std::string& dllPath) {
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if (!hProcess) {
        if (true) std::cerr << "[!] Failed to open process." << std::endl;
        return false;
    }

    void* pAlloc = VirtualAllocEx(hProcess, nullptr, dllPath.length() + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!pAlloc) {
        if (true) std::cerr << "[!] Failed to allocate memory." << std::endl;
        CloseHandle(hProcess);
        return false;
    }

    if (!WriteProcessMemory(hProcess, pAlloc, dllPath.c_str(), dllPath.length() + 1, nullptr)) {
        if (true) std::cerr << "[!] Failed to write memory." << std::endl;
        VirtualFreeEx(hProcess, pAlloc, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return false;
    }

    HANDLE hThread = CreateRemoteThread(hProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, pAlloc, 0, nullptr);
    if (!hThread) {
        if (true) std::cerr << "[!] Failed to create remote thread." << std::endl;
        VirtualFreeEx(hProcess, pAlloc, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return false;
    }

    WaitForSingleObject(hThread, INFINITE);
    VirtualFreeEx(hProcess, pAlloc, 0, MEM_RELEASE);
    CloseHandle(hThread);
    CloseHandle(hProcess);
    return true;
}

void ExtractZip(const std::string& zipPath, const std::string& exportPath) {
    libzippp::ZipArchive zf(zipPath);

    if (!zf.open(libzippp::ZipArchive::ReadOnly)) {
        return;
    }

    for (const auto& entry : zf.getEntries()) {
        if (entry.isFile()) {
            fs::path fullPath = fs::path(exportPath) / entry.getName();
            fs::create_directories(fullPath.parent_path());

            void* data = entry.readAsBinary();
            if (data != nullptr) {
                std::ofstream ofs(fullPath, std::ios::binary);
                ofs.write(static_cast<const char*>(data), entry.getSize());
                ofs.close();
                delete[] static_cast<char*>(data);
            }
        }
    }
    zf.close();
}

void CheckIfNeedUpdate() {
    const std::string baseUrl = "https://raw.githubusercontent.com/MauryDev/KoGaMaTools.Native/refs/heads/develop/src/app/";
    const std::string nativeFolder = "./Native";

    if (!fs::exists(nativeFolder)) {
        fs::create_directory(nativeFolder);
    }

    std::optional<std::string> versionAtual;
    if (fs::exists("version.txt")) {
        versionAtual = ReadConfig("version.txt");
    }

    auto versionResponse = cpr::Get(cpr::Url{ baseUrl + "version.txt" });
    std::string remoteVersion = versionResponse.text;

    if (!versionAtual.has_value() || remoteVersion != versionAtual.value()) {
        std::cout << "[+] Updating..." << std::endl;

        auto zipRequest = cpr::Get(cpr::Url{ baseUrl + "last-release.zip" });

        if (zipRequest.status_code == 200) {
            std::string tempZip = "temp_update.zip";
            std::ofstream ofs(tempZip, std::ios::binary);
            ofs << zipRequest.text;
            ofs.close();

            try {
                ExtractZip(tempZip, nativeFolder);
                fs::remove(tempZip);
                std::ofstream vFile("version.txt");
                vFile << remoteVersion;
                std::cout << "Update installed successfully in " << nativeFolder << std::endl;
            }
            catch (const std::exception& e) {
                std::cerr << "Extraction failed: " << e.what() << std::endl;
            }
        }
    }
}

// --- Injection Thread (Worker) ---
void InjectionWorker() {
    const std::string configFile = "config.txt";
    const std::wstring targetProcess = L"kogama.exe";
    const std::wstring targetModule = L"GameAssembly.dll";

    std::cout << "[*] Injector Thread Started." << std::endl;

    while (g_Running) {

#if !_DEBUG
        CheckIfNeedUpdate();
#endif

        std::string dllName = ReadConfig(configFile);
        if (dllName.empty()) {
            std::cerr << "[!] Error: config.txt is empty or not found." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            continue;
        }

        std::error_code ec;
        fs::path fullPath = fs::absolute(dllName, ec);
        if (ec || !fs::exists(fullPath)) {
            std::cerr << "[!] DLL not found: " << fullPath << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            continue;
        }

        DWORD pid = 0;
        bool waitingLogged = false;
        while (g_Running && (pid = GetProcessIdByName(targetProcess)) == 0) {
            if (!waitingLogged) {
                std::cout << "Waiting for " << std::string(targetProcess.begin(), targetProcess.end()) << "..." << std::endl;
                waitingLogged = true;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
        if (!g_Running) break;

        std::cout << "[+] Process found (PID: " << pid << "). Waiting for module..." << std::endl;

        while (g_Running && !IsModuleLoaded(pid, targetModule)) {
            if (GetProcessIdByName(targetProcess) == 0) {
                pid = 0;
                break;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        if (!g_Running) break;

        if (pid == 0) {
            std::cout << "[!] Process closed before module could load." << std::endl;
            continue;
        }

        std::wcout << "[+] Module " << targetModule << " detected." << std::endl;

        auto fullPathStr = fullPath.string();

        if (InjectDLL(pid, fullPathStr)) {
            std::cout << "[+] Injection successful!" << std::endl;
            ShowBalloonTip(L"Success!", L"DLL injected into KoGaMa successfully.");
        }
        else {
            std::cerr << "[!] Injection failed." << std::endl;
            ShowBalloonTip(L"Error", L"Failed to inject DLL.");
        }

        std::cout << "[*] Waiting for process to exit..." << std::endl;

        while (g_Running && GetProcessIdByName(targetProcess) != 0) {
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }

        std::cout << "[-] Process terminated. Restarting cycle..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

// --- Window and Tray Icon (Main Thread) ---

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_TRAYICON:
        if (lParam == WM_RBUTTONUP) {
            POINT lpClickPoint;
            GetCursorPos(&lpClickPoint);
            HMENU hPopMenu = CreatePopupMenu();

            // Item: Show/Hide Console
            UINT flagsConsole = MF_STRING;
            if (g_ShowConsole) flagsConsole |= MF_CHECKED;
            AppendMenu(hPopMenu, flagsConsole, ID_TRAY_TOGGLE_CONSOLE, L"Show Console");

            // Item: Notifications
            UINT flagsNotify = MF_STRING;
            if (g_NotifyOnInject) flagsNotify |= MF_CHECKED;
            AppendMenu(hPopMenu, flagsNotify, ID_TRAY_TOGGLE_NOTIFY, L"Notify on Inject");

            AppendMenu(hPopMenu, MF_SEPARATOR, 0, NULL);
            AppendMenu(hPopMenu, MF_STRING, ID_TRAY_EXIT, L"Exit");

            SetForegroundWindow(hwnd);
            TrackPopupMenu(hPopMenu, TPM_LEFTALIGN | TPM_LEFTBUTTON | TPM_BOTTOMALIGN,
                lpClickPoint.x, lpClickPoint.y, 0, hwnd, NULL);
            DestroyMenu(hPopMenu);
        }
        break;

    case WM_COMMAND:
        switch (LOWORD(wParam)) {
        case ID_TRAY_TOGGLE_CONSOLE:
            ToggleConsole();
            break;
        case ID_TRAY_TOGGLE_NOTIFY:
            g_NotifyOnInject = !g_NotifyOnInject;
            break;
        case ID_TRAY_EXIT:
            Shell_NotifyIcon(NIM_DELETE, &nid);
            g_Running = false; // Notify thread to stop
            PostQuitMessage(0);
            break;
        }
        break;

    case WM_DESTROY:
        Shell_NotifyIcon(NIM_DELETE, &nid);
        PostQuitMessage(0);
        break;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

// Switched from main() to WinMain to be a Windows application (no native console)
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {

    // 1. Manually create console and make it invisible
    InitConsole();
    ShowWindow(g_hConsole, SW_HIDE); // Ensure it starts hidden

    // 2. Start injection logic in a separate thread
    std::thread injectorThread(InjectionWorker);

    // 3. Configure Tray Window (Main Thread - UI)
    const wchar_t CLASS_NAME[] = L"TrayIconWindowClass";
    WNDCLASS wc = { 0 };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance; // Uses hInstance passed by Windows
    wc.lpszClassName = CLASS_NAME;
	wc.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1)); // Load custom icon from resources
    RegisterClass(&wc);

    // Create invisible window just to receive Tray messages
    HWND hwnd = CreateWindowEx(0, CLASS_NAME, L"KoGaMa Injector", 0, 0, 0, 0, 0,
        HWND_MESSAGE, NULL, hInstance, NULL);

    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = hwnd;
    nid.uID = 1;
    nid.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
    nid.uCallbackMessage = WM_TRAYICON;
    nid.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));
    lstrcpy(nid.szTip, L"KoGaMa Native Tools (Running)");

    Shell_NotifyIcon(NIM_ADD, &nid);

    // 4. Message Loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // 5. Cleanup
    g_Running = false;
    if (injectorThread.joinable()) {
        injectorThread.join();
    }

    // Free manually allocated console
    if (g_hConsole) {
        FreeConsole();
    }

    return 0;
}