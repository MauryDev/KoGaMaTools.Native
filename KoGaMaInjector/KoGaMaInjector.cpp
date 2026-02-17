#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>
#include <thread>
#include <chrono>
#include <windows.h>
#include <tlhelp32.h>

namespace fs = std::filesystem;

std::string ReadConfig(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    if (file.is_open()) {
        std::getline(file, line);
        line.erase(0, line.find_first_not_of(" \t\n\r"));
        line.erase(line.find_last_not_of(" \t\n\r") + 1);
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
        std::cerr << "[!] Failed to open process." << std::endl;
        return false;
    }

    void* pAlloc = VirtualAllocEx(hProcess, nullptr, dllPath.length() + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!pAlloc) {
        std::cerr << "[!] Failed to allocate memory." << std::endl;
        CloseHandle(hProcess);
        return false;
    }

    if (!WriteProcessMemory(hProcess, pAlloc, dllPath.c_str(), dllPath.length() + 1, nullptr)) {
        std::cerr << "[!] Failed to write memory." << std::endl;
        VirtualFreeEx(hProcess, pAlloc, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return false;
    }

    HANDLE hThread = CreateRemoteThread(hProcess, nullptr, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, pAlloc, 0, nullptr);
    if (!hThread) {
        std::cerr << "[!] Failed to create remote thread." << std::endl;
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

void WaitForProcessExit(DWORD pid) {
    HANDLE hProcess = OpenProcess(SYNCHRONIZE, FALSE, pid);
    if (hProcess) {
        WaitForSingleObject(hProcess, INFINITE);
        CloseHandle(hProcess);
    }
}

int main() {
    const std::string configFile = "config.txt";
    const std::wstring targetProcess = L"kogama.exe";
    const std::wstring targetModule = L"GameAssembly.dll";

    std::cout << "[*] Injector Started. Waiting for " << "kogama.exe" << "..." << std::endl;

    while (true) {
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
        while ((pid = GetProcessIdByName(targetProcess)) == 0) {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }

        std::cout << "[+] Process found (PID: " << pid << "). Waiting for module..." << std::endl;

        while (!IsModuleLoaded(pid, targetModule)) {
            if (GetProcessIdByName(targetProcess) == 0) {
                pid = 0;
                break;
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }

        if (pid == 0) {
            std::cout << "[!] Process closed before module could load. Restarting search..." << std::endl;
            continue;
        }

        std::wcout << "[+] Module " << targetModule << " detected." << std::endl;
        auto fullPathStr = fullPath.string();
        std::cout << "[*] Injecting: " << fullPathStr << std::endl;
        if (InjectDLL(pid, fullPathStr)) {
            std::cout << "[+] Injection successful!" << std::endl;
        }
        else {
            std::cerr << "[!] Injection failed." << std::endl;
        }

        std::cout << "[*] Waiting for process to exit to restart cycle..." << std::endl;
        WaitForProcessExit(pid);

        std::cout << "[-] Process terminated." << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        std::cout << "[*] Restarting cycle..." << std::endl << std::endl;
    }

    return 0;
}