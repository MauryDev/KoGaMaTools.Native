#pragma once

#include <imgui.h>
#include <string_view>
#include <span>
#include <kogama-tools/Core/DITools.h>

namespace KoGaMaTools::UI
{
	/**
	 * @brief Interface para gerenciamento de texturas agnóstico à API gráfica (OpenGL/DX11/DX12).
	 */
	class ITextureManager: public Core::IInitializable
	{
	public:
		void Init(Core::DIContainer& di) override;
		virtual ~ITextureManager() = default;

		// Usa string_view para evitar alocações desnecessárias ao buscar texturas
		virtual ImTextureID GetTexture(std::string_view name) const = 0;
		virtual ImTextureID GetTexture(int ResourceId) const = 0;

		// Carregamento de arquivos físicos
		virtual bool LoadTexture(std::string_view name, std::string_view filePath) = 0;

		// Carregamento de memória (ex: recursos embutidos ou downloads)
		// Alterado para const std::byte para representar dados binários brutos
		virtual bool LoadTextureMemory(std::string_view name, std::span<const std::byte> data) = 0;

		// Remove uma textura específica e libera memória de GPU
		virtual void UnloadTexture(std::string_view name) = 0;

		// Limpa todo o cache
		virtual void Clear() = 0;

		// Verifica existência sem necessariamente retornar o ID
		virtual bool HasTexture(std::string_view name) const = 0;
	};
}