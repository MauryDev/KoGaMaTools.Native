#pragma once
#include <Windows.h>
#include <memory>
#include "IO/IKoGaMaEnvironment.h"
#include <kogama-tools/Core/DITools.h>

namespace KoGaMaTools::Services
{
	class AppBootstrapper {
	public:
		static void Run(HMODULE module);
	private:
		static void WaitForGame();
		static void SetupEnvironment(HMODULE module);
		static void InitializeNative(Core::DIContainer& app);
		static void InitializeGraphics(Core::DIContainer& app);

		static void RegisterServices(Core::DIContainer& app,  HMODULE module);
		static void RegisterModules(Core::DIContainer& app);
		static void SetupUI(Core::DIContainer& app);
		static void SetupServices(Core::DIContainer& app);


	};
}