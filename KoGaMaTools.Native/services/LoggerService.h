#pragma once
#include <string>
#include <fstream>

namespace KoGaMaTools::Services {
    
    class LoggerService {
    public:
        LoggerService(const char* name);
        ~LoggerService();

        // Níveis de Log
        void Info(const std::string& message);
        void Warning(const std::string& message);
        void Error(const std::string& message);

        // Para logs genéricos ou rápidos
        void Write(const std::string& txt);


        // Verifica uma condição. Se false, loga um erro crítico.
        bool Assert(bool condition, const std::string& test_name);

        // Função de Teste para verificar se o arquivo está acessível
        bool RunDiagnostics();
        static LoggerService* GetMainTest();

    private:
        std::ofstream _logFile;
        std::string _currentName;
        void LogWithLevel(const std::string& level, const std::string& message);
    };
}