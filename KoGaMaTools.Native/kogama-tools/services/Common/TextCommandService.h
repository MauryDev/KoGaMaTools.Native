#pragma once
#include "../../Core/DITools.h"
#include <string>
#include <string_view>

namespace KoGaMaTools::Services {
	struct ICommandResolve;
	
	struct TextCommandService : Core::IInitializable {
		struct CommandData {
			std::wstring_view name;
			std::vector<std::wstring_view> args;
		};
		inline static std::shared_ptr<TextCommandService> Instance;
		static void OnTextCommand(void* _txt);
		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
		void SetupCommandsResolve();
		static CommandData ParseCommand(std::wstring_view command);
		static void NotifyUser(const std::wstring_view& message);
		static void NotifyUser(const std::string_view& message);
	private:

		

		// Subfunções auxiliares
		static std::wstring_view Trim(std::wstring_view s);
		static std::wstring_view ExtractCommandName(std::wstring_view& command);
		static void ExtractArguments(std::wstring_view remainder, std::vector<std::wstring_view>& args);
		
		// Constante para definir o que consideramos "espaço"
		static constexpr std::wstring_view WHITESPACE = L" \t\r\n";
		std::vector<std::shared_ptr<ICommandResolve>> Handlers;

	};

	struct ICommandResolve {
		virtual bool Resolve(TextCommandService::CommandData& command) { return false; }
		virtual std::string_view GetCommandHelp() { return ""; }
		
		virtual ~ICommandResolve() = default;

		

	};
}