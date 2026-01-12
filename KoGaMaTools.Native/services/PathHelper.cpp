#include "PathHelper.h"
#include <unordered_map>
#include <utility>
#include <memory>
#include <iterator>
namespace KoGaMaTools::Services::PathHelper {
    namespace {

        static const std::pair<const char*, KoGaMaRegion> regionPairs[] = {
            {"BR", KoGaMaRegion::BR},
            {"WWW", KoGaMaRegion::WWW},
            {"Friends", KoGaMaRegion::Friends},
            {"Custom", KoGaMaRegion::Custom}
        };

       

    }
    const std::filesystem::path& GetDllPath()
    {
        static std::filesystem::path cache_;
        if (!cache_.empty())
        {
            return cache_;
        }
        const int lenCurDir = 300;
        char curDir[lenCurDir];
        GetModuleFileNameA(moduleDll, curDir, lenCurDir);
        cache_ = std::filesystem::path(curDir);
        return cache_;
    }
    const std::filesystem::path& GetFolderWork()
    {
        static std::filesystem::path cache_;
        if (!cache_.empty())
        {
            return cache_;
        }
        cache_ = GetDllPath().parent_path();
        return cache_;
    }

    const std::filesystem::path& GetKoGaMaPath()
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

    KoGaMaRegion GetRegion()
    {
        static std::optional<KoGaMaRegion> cache_;
        
        if (cache_)
            return cache_.value();
        auto& kogamaPath = GetKoGaMaPath();

        if (std::distance(kogamaPath.begin(), kogamaPath.end()) < 3) {
            cache_ = KoGaMaRegion::Custom;
            return *cache_;
        }

        auto it = kogamaPath.end();
        for (int i = 0; i < 3; i++)
            --it;

        auto rootPath = it->string();
        
        auto findMinus = rootPath.find("-");
        if (findMinus != std::string::npos) 
            cache_ = FromStr(rootPath.substr(findMinus + 1));
        else 
            cache_ = KoGaMaRegion::Custom;
        return cache_.value();
    }

    KoGaMaRegion FromStr(const std::string_view& value)
    {
       
        for (const auto& entry : regionPairs)
            if (entry.first == value) return entry.second;
        return KoGaMaRegion::Custom;

    }

    const char* RegionToStr(KoGaMaRegion region)
    {
        for (const auto& entry : regionPairs)
            if (entry.second == region) return entry.first;
        return "Custom";
    }

}



