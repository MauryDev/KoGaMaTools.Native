#pragma once
#include <unordered_map>
#include <memory>
#include <typeindex>
#include <iostream>
#include <vector>
#include <algorithm>
namespace KoGaMaTools::Core {
    class DIContainer;

    class IBaseService { public: virtual ~IBaseService() = default; };
    /**
     * @brief Interface opcional para serviços que precisam de lógica de inicialização.
     */
    class IInitializable: public IBaseService {
    public:
        virtual void Init(DIContainer& di) = 0;
    };

    /**
     * @brief Um Container de Injeção de Dependência simplificado.
     * Armazena instâncias únicas de serviços mapeadas pelo seu tipo.
     */
    class DIContainer {
    public:
        // Singleton para acesso global no contexto do Mod
        static DIContainer& GetInstance();

        /**
         * @brief Adiciona um serviço ao container.
         * Se o serviço já existir, ele será substituído.
         */
        template <typename T>
        inline DIContainer& AddService(std::shared_ptr<T> service) {
            if (!service) return *this;

            auto typeId = std::type_index(typeid(T));

            // Se o serviço é novo, guardamos a ordem dele
            if (m_services.find(typeId) == m_services.end()) {
                m_order.push_back(typeId);
            }

            // Armazenamos como IBaseService para permitir Init()
            m_services[typeId] = std::dynamic_pointer_cast<IBaseService>(service);
            return *this;
        }

        /**
         * @brief Cria e adiciona um serviço via argumentos de construtor.
         */
        template <typename T, typename... Args>
        inline DIContainer& NewService(Args&&... args) {
            auto service = std::make_shared<T>(std::forward<Args>(args)...);
            AddService<T>(service);
            return *this;
        }

        template <typename T>
        inline std::vector<std::shared_ptr<T>> GetAllByInterface() {
            std::vector<std::shared_ptr<T>> matches;
            for (const auto& typeId : m_order) {
                auto& basePtr = m_services[typeId];
                if (auto casted = std::dynamic_pointer_cast<T>(basePtr)) {
                    matches.push_back(casted);
                }
            }
            return matches;
        }
        /**
         * @brief Obtém um serviço do container (Busca rápida O(1)).
         */
        template <typename T>
        inline std::shared_ptr<T> Get() {
            auto typeId = std::type_index(typeid(T));
            auto it = m_services.find(typeId);

            if (it != m_services.end()) {
                // Cast de volta para o tipo original solicitado
                return std::static_pointer_cast<T>(it->second);
            }
            return nullptr;
        }


        /**
         * @brief Executa o método Init() em todos os serviços que herdam de IInitializable.
         */
        void InitAll();

        /**
         * @brief Verifica se um serviço existe.
         */
        template <typename T>
        inline bool HasService() const {
            return m_services.find(std::type_index(typeid(T))) != m_services.end();
        }

        template <typename T>
        inline void RemoveService() {
            auto typeId = std::type_index(typeid(T));
            m_services.erase(typeId);
            m_order.erase(std::remove(m_order.begin(), m_order.end(), typeId), m_order.end());
        }

        /**
         * @brief Limpa todos os serviços carregados.
         */
        void Reset();

    private:
        DIContainer() = default;
        DIContainer(const DIContainer&) = delete;
        DIContainer& operator=(const DIContainer&) = delete;

        std::vector<std::type_index> m_order;

        // Mapa único de instâncias
        std::unordered_map<std::type_index, std::shared_ptr<IBaseService >> m_services;
    };

    /**
     * @brief Helper variadic para registrar múltiplos serviços de uma vez.
     * Exemplo: InstallMultiple<ServiceA, ServiceB, ServiceC>();
     */
    template <typename... Ts>
    void InstallMultiple() {
        (DIContainer::GetInstance().NewService<Ts>(), ...);
    }
}