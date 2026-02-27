#pragma once
#include <string>
#include <fstream>
#include "../Core/DITools.h"

namespace KoGaMaTools::Services {
    
    class LoggerService: public Core::IInitializable {
    public:
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

    private:
        std::ofstream _logFile;
        std::string _currentName;
        void LogWithLevel(const std::string& level, const std::string& message);

        // Inherited via IInitializable
        void Init(Core::DIContainer& di) override;
    };
}