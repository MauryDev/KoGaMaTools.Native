#include "SinglePaintFace.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"
#include <imgui.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
using namespace Tools::Il2Cpp;

namespace KoGaMaTools::Services
{
	namespace {
		void (*OldFunc)(void* instance, void* e, void* methodInfo);
	}
	
	void SinglePaintFace::Render()
	{
		ImGui::Checkbox("Single Face", &Enabled);

	}
	void SinglePaintFace::Init(Core::DIContainer& di)
	{
		Instance = di.Get<SinglePaintFace>();
		auto logger = di.Get<LoggerService>();
		auto configService = di.Get<ConfigService>();

		// Load initial configuration values
		LoadConfig(configService->GetConfig());

		auto methodVer = (void**)KoGaMaAPI::KoGaMa::PaintCubes::m_Execute.ptr;

		logger->Assert(methodVer != nullptr, "[SinglePaintFace] - Null methodPtr");
		logger->Assert(*methodVer != nullptr, "[SinglePaintFace] - Null target");

		logger->Assert(
			MH_CreateHook(*methodVer, PaintCubes_Execute, (void**)&OldFunc) == MH_OK,
			"[SinglePaintFace] - CreateHook"
		);

		logger->Assert(
			MH_EnableHook(*methodVer) == MH_OK,
			"[SinglePaintFace] - EnableHook"
		);
	}
	void SinglePaintFace::LoadConfig(const nlohmann::json& value)
	{
		Enabled = value.value("SinglePaintFace.Enabled", Enabled);
	}
	void SinglePaintFace::OnChangedConfig(const nlohmann::json& value)
	{
		LoadConfig(value);
	}
	void SinglePaintFace::OnSavingConfig(nlohmann::json& value)
	{
		value["SinglePaintFace.Enabled"] = Enabled;
	}
	void SinglePaintFace::PaintCubes_Execute(void* instance, void* e, void* methodInfo)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		if (Instance->Enabled)
		{
			if (K::CubeModelTool::f_waitForMouseUp.Get<Tools::Il2Cpp::Il2CppBoolean>(instance))
			{
				auto value = K::MVInputWrapper::m0_GetBooleanControl(K::KogamaControls::f_PointerSelect.Get<int>()).Unbox<Il2CppBoolean>();
				K::CubeModelTool::f_waitForMouseUp.Set(instance, value);
			}
			bool isPainting = false;
			auto selectedCube = K::CubeModelingStateMachine::m_get_SelectedCube(e);
			auto model = K::CubeModelingStateMachine::m_get_TargetCubeModel(e);

			if (K::MVInputWrapper::m0_GetBooleanControl(K::KogamaControls::f_PointerSelect.Get<int>()).Unbox<Il2CppBoolean>() &&
				!selectedCube.isNull())
			{
				auto ilocalPos = Il2CppPointer((intptr_t)selectedCube.ptr + K::CubePickingInfo::f_iLocalPos.getOffset());
				auto pickedFace = K::CubePickingInfo::f_pickedFace.Get<int>(selectedCube);
				auto materialId = K::CubeModelingStateMachine::m_get_CurrentMaterialId(e).Unbox<uint8_t>();
				auto cubeCount = K::MVCubeModelBase::m_get_CubeCount(model).Unbox<int>();

				K::CubeModelingStateMachine::m_HandleAudio(e, ilocalPos, K::AudioActions::f_CubeAdded.Get<int>());
				K::MVCubeModelBase::m_SetMaterial(model, ilocalPos, pickedFace, materialId);
				K::CubeModelTool::m_SendCubeEvent(cubeCount, K::EditCubeChange::f_CubePainted.Get<int>());
				isPainting = true;
			}
			auto paintCursor = K::PaintCubes::f_paintCursor.Get<Il2CppObject>(instance);
			K::PaintCursor::m_UpdateCursor(paintCursor,selectedCube, model, isPainting);

		}
		else
		{
			OldFunc(instance, e, methodInfo);
		}
	}

	bool SinglePaintFace::Resolve(TextCommandService::CommandData& command)
	{
		if (command.name == L"singlepaintface")
		{
			if (command.args.empty())
			{
				Enabled = !Enabled;
				TextCommandService::NotifyUser(L"SinglePaintFace: " + std::wstring(Enabled ? L"enabled" : L"disabled"));
				return true;
			}

			std::wstring_view subcommand = command.args[0];
			if (subcommand == L"enable")
			{
				Enabled = true;
				TextCommandService::NotifyUser(L"SinglePaintFace enabled");
				return true;
			}
			else if (subcommand == L"disable")
			{
				Enabled = false;
				TextCommandService::NotifyUser(L"SinglePaintFace disabled");
				return true;
			}
		}
		return false;
	}

	std::string_view SinglePaintFace::GetCommandHelp()
	{
		return "/singlepaintface: Paint only a single face of a cube.\n"
			   "Usage: /singlepaintface [enable|disable]";
	}
}
