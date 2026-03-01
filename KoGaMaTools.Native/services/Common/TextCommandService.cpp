#include "TextCommandService.h"
#include "../LoggerService.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <MinHook.h>
#include <Tools.Il2Cpp.Lib.h>
#include <Il2CppUtils.h>
#include <string_view>
namespace {
	void(*OnTextCommand_old)(void* txt);
}
void KoGaMaTools::Services::TextCommandService::OnTextCommand(void* _txt)
{
	for (auto& handler : Instance->Handlers)
	{
		auto s = Tools::Il2Cpp::Il2CppString(_txt);
		auto command = ParseCommand(std::wstring_view(s.getChars(), s.getLength()));
		
		if (handler->Resolve(command))
			return;
	}
	OnTextCommand_old(_txt);
}

void KoGaMaTools::Services::TextCommandService::Init(Core::DIContainer& di)
{
	Instance = di.Get<TextCommandService>();
	auto logger = di.Get<LoggerService>();

	auto method1 = (void**)KoGaMaAPI::KoGaMa::TextCommand::m_Resolve.ptr;

	logger->Assert(method1 != nullptr, "[TextCommandService] - Null methodPtr #1");
	logger->Assert(*method1 != nullptr, "[TextCommandService] - Null target #1");

	logger->Assert(
		MH_CreateHook(*method1, OnTextCommand, (void**)&OnTextCommand_old) == MH_OK,
		"[TextCommandService] - CreateHook #1"
	);

	logger->Assert(
		MH_EnableHook(*method1) == MH_OK,
		"[TextCommandService] - EnableHook #1"
	);

}

void KoGaMaTools::Services::TextCommandService::SetupCommandsResolve()
{
	Core::DIContainer& di = Core::DIContainer::GetInstance();
	this->Handlers = di.GetAllByInterface<ICommandResolve>();
}

KoGaMaTools::Services::TextCommandService::CommandData KoGaMaTools::Services::TextCommandService::ParseCommand(std::wstring_view command)
{
	CommandData data;

	if (command.empty()) return data;

	// 1. Remove o prefixo (ex: '/') e limpa espaços iniciais/finais
	command.remove_prefix(1);
	command = Trim(command);

	if (command.empty()) return data;

	// 2. Separa o nome do comando e atualiza o que sobrou
	data.name = ExtractCommandName(command);

	// 3. O 'command' agora contém apenas o restante (os argumentos)
	ExtractArguments(command, data.args);

	return data;
}

void KoGaMaTools::Services::TextCommandService::NotifyUser(const std::wstring_view& message)
{
	auto str = Tools::Il2Cpp::Il2CppString::NewUtf16(message.data(), static_cast<int32_t>(message.size()));
	KoGaMaAPI::KoGaMa::TextCommand::m_NotifyUser(str);
}
void KoGaMaTools::Services::TextCommandService::NotifyUser(const std::string_view& message)
{
	auto str = Tools::Il2Cpp::Il2CppString::NewLen(message.data(), static_cast<int32_t>(message.size()));
	KoGaMaAPI::KoGaMa::TextCommand::m_NotifyUser(str);
}

std::wstring_view KoGaMaTools::Services::TextCommandService::Trim(std::wstring_view s) {
	size_t first = s.find_first_not_of(WHITESPACE);
	if (first == std::wstring_view::npos) return {};

	size_t last = s.find_last_not_of(WHITESPACE);
	return s.substr(first, (last - first + 1));
}

std::wstring_view KoGaMaTools::Services::TextCommandService::ExtractCommandName(std::wstring_view& command) {
	size_t spacePos = command.find_first_of(WHITESPACE);

	if (spacePos == std::wstring_view::npos) {
		std::wstring_view name = command;
		command = {}; // Não sobra nada para os argumentos
		return name;
	}

	std::wstring_view name = command.substr(0, spacePos);
	command = command.substr(spacePos); // Atualiza para o restante da string
	return name;
}

void KoGaMaTools::Services::TextCommandService::ExtractArguments(std::wstring_view remainder, std::vector<std::wstring_view>& args) {
	size_t i = 0;
	size_t size = remainder.size();

	while (i < size) {
		// 1. Pular espaços em branco entre argumentos
		i = remainder.find_first_not_of(WHITESPACE, i);
		if (i == std::wstring_view::npos) break;

		if (remainder[i] == L'"') {
			i++;
			size_t start = i;
			size_t end = remainder.find_first_of(L'"', start);

			if (end == std::wstring_view::npos) {
				// Aspa não fechada: pega o resto da string como argumento
				args.push_back(remainder.substr(start));
				break;
			}
			else {
				args.push_back(remainder.substr(start, end - start));
				i = end + 1; // Pula a aspa de fechamento
			}
		}
		else {
			size_t start = i;
			size_t end = remainder.find_first_of(WHITESPACE, start);

			if (end == std::wstring_view::npos) {
				args.push_back(remainder.substr(start));
				break;
			}
			else {
				args.push_back(remainder.substr(start, end - start));
				i = end;
			}
		}
	}
}