#include "LoggerService.h"
#include <chrono>
#include <iomanip>
#include "PathHelper.h"

namespace KoGaMaTools::Services {

    LoggerService::LoggerService(const char* name) : _currentName(name) {
        auto localPath = PathHelper::GetFolderWork() / (std::string(name) + ".log");

        // Abrimos em modo append
        _logFile.open(localPath.string(), std::ios::out);

        if (_logFile.is_open()) {
            LogWithLevel("SYSTEM", "=== Início da Sessão de Log ===");
        }
    }

    LoggerService::~LoggerService() {
        if (_logFile.is_open()) {
            LogWithLevel("SYSTEM", "=== Fim da Sessão de Log ===");
            _logFile.close();
        }
    }

    // Helper privado para formatar todos os logs
    void LoggerService::LogWithLevel(const std::string& level, const std::string& message) {
        if (!_logFile.is_open()) return;

        auto now = std::chrono::system_clock::now();
        auto in_time_t = std::chrono::system_clock::to_time_t(now);
        struct tm buf;
        localtime_s(&buf, &in_time_t);

        _logFile << "[" << std::put_time(&buf, "%Y-%m-%d %X") << "] "
            << "[" << level << "] " << message << "\n";

        // Flush apenas em erros para não matar a performance em código gerado
        if (level == "ERROR") {
            _logFile.flush();
        }
    }

    void LoggerService::Info(const std::string& message) { LogWithLevel("INFO", message); }
    void LoggerService::Warning(const std::string& message) { LogWithLevel("WARN", message); }
    void LoggerService::Error(const std::string& message) { LogWithLevel("ERROR", message); }

    void LoggerService::Write(const std::string& txt) { LogWithLevel("LOG", txt); }

    bool LoggerService::RunDiagnostics() {
        if (!_logFile.is_open()) return false;
        Info("Teste de diagnóstico executado com sucesso.");
        return true;
    }
    bool LoggerService::Assert(bool condition, const std::string& test_name) {
        if (condition) {
            // Opcional: Logar sucesso apenas para debug pesado
            // LogWithLevel("PASS", test_name); 
            return true;
        }

        // Se a condição for falsa, registramos o erro com destaque
        std::string failure_msg = "ASSERT FAILED: " + test_name;
        LogWithLevel("CRITICAL", failure_msg);

        // Forçamos o flush para garantir que o erro esteja no arquivo se o app crashar
        if (_logFile.is_open()) {
            _logFile.flush();
        }

        return false;
    }
}