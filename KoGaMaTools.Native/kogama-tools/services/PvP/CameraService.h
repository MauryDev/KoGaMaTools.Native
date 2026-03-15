#pragma once
#include <string_view>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
//#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"
#include "../Common/MainComponent.h"
namespace KoGaMaTools::Services {
	struct CameraService : UI::MainUI::IComponent,
		Core::IInitializable,
		Services::ICommandResolve
	{
		inline static std::shared_ptr<CameraService> Instance;
		std::shared_ptr<MainComponent> mainComponent;
		float fov = 90.0f;
		bool enableFov = false;
		bool enableThirdPerson = false;
		float farClip = 1000.0f;
		float aspect[2] = { 16.0f, 9.0f };
		int aspectPreset = 0;
		const char* aspectItems[3] = { "16:9", "4:3", "21:9" };
		const float aspectItemsValue[3][2] = {
			{16.0f, 9.0f},
			{4.0f,3.0f},
			{21.0f, 9.0f}
		};
		void Render() override;



		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;

		//void LoadConfig(const nlohmann::json& value);
		//void OnChangedConfig(const nlohmann::json& value) override;
		//void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;

		static float Hook_GetFovImpl(void* instance);
		void SetFairClipPlane(float value);
		void SetAspect(float x, float y);

		static void SetFairClipPlaneImpl(float value);
		static void SetAspectImpl(float x, float y);
		static bool PickupItem_m_get_FirstPerson(void* instance);


		template <auto& OriginalFn>
		static float CameraHookWrapper(void* instance)
		{
			if (!Instance->enableFov) return OriginalFn(instance);

			return Instance->fov;
		}

	};
}