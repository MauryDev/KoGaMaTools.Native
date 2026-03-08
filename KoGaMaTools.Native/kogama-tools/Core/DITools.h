#pragma once
#include <unordered_map>
#include <memory>
#include <typeindex>
#include <iostream>
#include <vector>
#include <algorithm>
namespace KoGaMaTools::Core {
    class DIContainer;
    template <typename TInterface, typename TImplementation>
    struct Bind {
        using Interface = TInterface;
        using Implementation = TImplementation;
    };
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

        /**
 * @brief Adiciona um serviço mapeando uma Interface para uma Implementação.
 * Exemplo: container.AddServiceAs<ICommandService>(meuServicoConcreto);
 */
        template <typename Interface, typename Implementation>
        inline DIContainer& AddServiceAs(std::shared_ptr<Implementation> service) {
            static_assert(std::is_base_of<Interface, Implementation>::value,
                "A classe de implementacao deve herdar da interface!");

            if (!service) return *this;

            auto typeId = std::type_index(typeid(Interface));

            if (m_services.find(typeId) == m_services.end()) {
                m_order.push_back(typeId);
            }

            // Armazena a implementação sob o ID da Interface
            m_services[typeId] = std::static_pointer_cast<IBaseService>(service);
            return *this;
        }

        /**
         * @brief Cria uma nova instância de Implementation e a registra como Interface.
         * Exemplo: container.NewServiceAs<ITextService, TextService>("meu_arg");
         */
        template <typename Interface, typename Implementation, typename... Args>
        inline DIContainer& NewServiceAs(Args&&... args) {
            auto service = std::make_shared<Implementation>(std::forward<Args>(args)...);
            return AddServiceAs<Interface, Implementation>(service);
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

    // --- Helper para detectar o Bind (Precisa estar antes do InstallMultiple) ---
    template <typename T> struct is_bind : std::false_type {};
    template <typename I, typename C> struct is_bind<Bind<I, C>> : std::true_type {};
    template <typename T> inline constexpr bool is_bind_v = is_bind<T>::value;

    /**
    * @brief Registra múltiplos serviços.
    * Aceita tanto tipos simples quanto Bind<Interface, Implementação>.
    * * Exemplo:
    * InstallMultiple<
    * ServiceA,                               // Classe concreta direta
    * Bind<ICommandService, TextCommandService> // Interface -> Implementação
    * >();
    */
    template <typename... Ts>
    void InstallMultiple() {
        auto& di = DIContainer::GetInstance();

        auto register_service = [&di](auto t) {
            using T = decltype(t);

            // Verifica se o tipo T é uma instância de Bind<I, C>
            if constexpr (is_bind_v<T>) {
                di.NewServiceAs<typename T::Interface, typename T::Implementation>();
            }
            else {
                di.NewService<T>();
            }
            };

        // "Expande" o pack variadic chamando a lambda para cada tipo
        (register_service(Ts{}), ...);
    }

   
}