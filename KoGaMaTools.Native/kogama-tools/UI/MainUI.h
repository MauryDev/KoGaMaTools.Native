#pragma once
#include <vector>
#include <memory>
#include <string>
#include "../Core/DITools.h"
#include "../services/LoggerService.h"
namespace KoGaMaTools::UI {

	struct MainUI : Core::IInitializable {
		struct IComponent {
			virtual void Render() {}
			virtual ~IComponent() {}
		};

		using PtrIComponent = std::shared_ptr<IComponent>;
		inline static std::shared_ptr<MainUI> Instance;
		std::vector<std::pair<std::string, std::vector<PtrIComponent>>> components;
		
		void Init(Core::DIContainer& di);
		static void Render();
		void TabBarTools();

		void AddComponentType(const std::string& name);
		void AddComponent(int i, const PtrIComponent& value);

		template <typename... Ts>
		void AddComponents(int i, const std::shared_ptr<Ts>&... components) {
			// 1. Static assertion to ensure all types in the pack derive from IComponent
			static_assert((std::is_base_of_v<IComponent, Ts> && ...),
				"All types must derive from IComponent");

			// 2. Fold expression to call the single-component AddComponent for each item
			(AddComponent(i, std::static_pointer_cast<IComponent>(components)), ...);
		}
		template <typename... Ts>
		void AddComponents(const std::string& name, const std::shared_ptr<Ts>&... components) {
			// 1. Static assertion to ensure all types in the pack derive from IComponent
			static_assert((std::is_base_of_v<IComponent, Ts> && ...),
				"All types must derive from IComponent");

			AddComponentType(name);
			auto i = this->components.size() - 1;
			// 2. Fold expression to call the single-component AddComponent for each item
			(AddComponent(static_cast<int>(i), std::static_pointer_cast<IComponent>(components)), ...);
		}
		void StartUI();
	};
	
}