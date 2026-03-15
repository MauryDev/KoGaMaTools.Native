#pragma once
#include <imgui.h>
#include <string_view>
#include <span>
#include <kogama-tools/Core/DITools.h>

namespace KoGaMaTools::UI {
    class IFontManager : public Core::IInitializable
    {
    public:

        virtual ~IFontManager() = default;
        
        void Init(Core::DIContainer& di) override;

        virtual bool Initialize() = 0;
        virtual void Shutdown() = 0;

        virtual ImFont* LoadFromFile(
            const std::string_view& name,
            const char* path,
            float size
        ) = 0;

        virtual ImFont* LoadFromMemory(
            const std::string_view& name,
            std::span<const std::byte> data,
            float size
        ) = 0;

        virtual ImFont* GetFont(const char* name) = 0;
        virtual ImFont* GetFont(int id) = 0;

        virtual void Clear() = 0;
    };
}
