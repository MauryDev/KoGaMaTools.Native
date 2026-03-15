#pragma once
#include "IFontManager.h"
#include <Windows.h>
namespace KoGaMaTools::UI
{
	class DX11FontManager : public IFontManager
	{
	public:
		DX11FontManager(HMODULE module);
		void Init(Core::DIContainer& di) override;
		bool Initialize() override;
		void Shutdown() override;
		ImFont* LoadFromFile(const std::string_view& name, const char* path, float size) override;
		ImFont* LoadFromMemory(const std::string_view& name, std::span<const std::byte> data, float size) override;
		ImFont* GetFont(const char* name) override;
		ImFont* GetFont(int id) override;
		void Clear() override;
		static BOOL CALLBACK EnumResourcesCallback(HMODULE hModule, LPCSTR lpszType, LPSTR lpszName, LONG_PTR lParam);

	private:
		std::unordered_map<std::string, ImFont*> m_fonts;
		HMODULE _module;
	};
}