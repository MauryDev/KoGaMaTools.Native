#pragma once
#include <cinttypes>
#include <memory>
#include "../../Core/DITools.h"
#include "../../Types/Vector3.h"
#include <string_view>
#include <Tools.Il2Cpp.Lib.h>

namespace KoGaMaTools::Services {
	struct IContextButtonAction {

		virtual ~IContextButtonAction() = default;
		virtual void Execute(Tools::Il2Cpp::Il2CppObject wo) = 0;
		virtual bool ShouldShow(Tools::Il2Cpp::Il2CppObject wo) = 0;
		virtual std::string_view GetName() = 0;
	};
	struct ContextMenuService : 
		Core::IInitializable
	{
		inline static std::shared_ptr<ContextMenuService> Instance;
		inline static std::vector<std::shared_ptr<IContextButtonAction>> Callbacks;
		static void OnInitialize(void* instance, void* name, void* unityAction);
		void Init(Core::DIContainer& di) override;


		void SetupButtons();
		// System.Object[] { System.IntPtr, ContextMenu}

		static void HandlerFn(void* _arr);

	};
}