#pragma once

#include <imgui.h>
#include <string_view>
#include <span>
#include <kogama-tools/Core/DITools.h>

namespace KoGaMaTools::UI
{

	class ITextureManager: public Core::IInitializable
	{
	public:
		void Init(Core::DIContainer& di) override;
		virtual ~ITextureManager() = default;

		virtual ImTextureID GetTexture(const std::string_view& name) const = 0;
		virtual ImTextureID GetTexture(int ResourceId) const = 0;

		virtual bool LoadTexture(const std::string_view& name, const std::string_view& filePath) = 0;

		
		virtual bool LoadTextureMemory(const std::string_view& name, std::span<const std::byte> data) = 0;

		virtual void UnloadTexture(const std::string_view& name) = 0;

		virtual void Clear() = 0;

		virtual bool HasTexture(const std::string_view& name) const = 0;
	};
}