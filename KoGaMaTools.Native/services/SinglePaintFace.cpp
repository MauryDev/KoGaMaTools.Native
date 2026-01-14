#include "SinglePaintFace.h"
#include "..\metadata\KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"

namespace KoGaMaTools::Services::SinglePaintFace
{
	namespace {
		void (*OldFunc)(void* instance, void* e, void* methodInfo);
	}
	void Install()
	{
		auto methodVer = (void**)KoGaMaAPI::KoGaMa::PaintCubes::m_Execute.ptr;


		MH_CreateHook(*methodVer, PaintCubes_Execute, (void**)&OldFunc);

		MH_EnableHook(*methodVer);
	}
	void PaintCubes_Execute(void* instance, void* e, void* methodInfo)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		if (Enable)
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
}
