#include "KoGaMaEnvironmentWindows.h"

KoGaMaTools::Services::KoGaMaEnvironmentWindows::KoGaMaEnvironmentWindows(HMODULE moduleDll)
{
    this->ModuleDll = moduleDll;

}
const std::filesystem::path& KoGaMaTools::Services::KoGaMaEnvironmentWindows::GetDllPath() const
{
    static std::filesystem::path cache_;
    if (!cache_.empty())
    {
        return cache_;
    }
    const int lenCurDir = 300;
    char curDir[lenCurDir];
    GetModuleFileNameA(ModuleDll, curDir, lenCurDir);
    cache_ = std::filesystem::path(curDir);
    return cache_;
}

const std::filesystem::path& KoGaMaTools::Services::KoGaMaEnvironmentWindows::GetFolderWork() const
{
    static std::filesystem::path cache_;
    if (!cache_.empty())
    {
        return cache_;
    }
    cache_ = GetDllPath().parent_path();
    return cache_;
}

const std::filesystem::path& KoGaMaTools::Services::KoGaMaEnvironmentWindows::GetKoGaMaPath() const
{
    static std::filesystem::path cache_;
    if (!cache_.empty())
    {
        return cache_;
    }
    const int lenCurDir = 300;
    char curDir[lenCurDir];
    DWORD charsCopied = GetModuleFileNameA(GetModuleHandle(NULL), curDir, lenCurDir);
    std::filesystem::path workpath(curDir);
    workpath = workpath.parent_path();
    cache_ = std::move(workpath);

    return cache_;
}

KoGaMaTools::Services::KoGaMaEnvironmentWindows::Region KoGaMaTools::Services::KoGaMaEnvironmentWindows::GetRegion() const
{
    static std::optional<Region> cache_;
    if (cache_)
        return *cache_;
    auto& kogamaPath = GetKoGaMaPath();

    if (std::distance(kogamaPath.begin(), kogamaPath.end()) < 3) {
        cache_ = Region::Custom;
        return *cache_;
    }

    auto it = kogamaPath.end();
    for (int i = 0; i < 3; i++)
        --it;

    auto rootPath = it->string();

    auto findMinus = rootPath.find("-");
    if (findMinus != std::string::npos)
    {
        std::string_view view = std::string_view(rootPath).substr(findMinus + 1);
        cache_ = FromStr(view);

    }
    else
        cache_ = Region::Custom;
    return *cache_;
}

