#pragma once
#include <cinttypes>
#include <memory>
#include "kogama-tools/UI/MainUI.h"
#include "kogama-tools/Core/DITools.h"
#include "kogama-tools/services/Common/ContextMenuService.h"
#include "kogama-tools/services/Common/TextCommandService.h"
#include "CubeInfo.h"
namespace KoGaMaTools::Services::ModelModule{
	struct CopyModelService : Core::IInitializable,
		Services::IContextButtonAction,
		Services::ICommandResolve
	{
		inline static std::shared_ptr<CopyModelService> Instance;
		std::vector<CubeInfo> copiedCubes;
		void Init(Core::DIContainer& di) override;

		


		void Execute(Tools::Il2Cpp::Il2CppObject wo) override;

		bool ShouldShow(Tools::Il2Cpp::Il2CppObject wo) override;
		std::string_view GetName() override;
		bool Resolve(TextCommandService::CommandData& command) override;

		std::string_view GetCommandHelp() override;

	};
}