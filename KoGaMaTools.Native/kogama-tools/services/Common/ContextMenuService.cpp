#include "ContextMenuService.h"
#include <MinHook.h>
#include "../LoggerService.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>
#include "../../Helpers/DelegateUtils.h"
#include "../../Helpers/HookHelper.h"
#include "TextCommandService.h"
namespace {
	void(*OnInitializeOld)(void* instance, void* name, void* unityAction);
}
void KoGaMaTools::Services::ContextMenuService::OnInitialize(void* instance, void* name, void* unityAction)
{
	namespace K = KoGaMaAPI::KoGaMa;
	namespace I = Tools::Il2Cpp::ICalls;

	OnInitializeOld(instance, name, unityAction);

	auto nameStr = Tools::Il2Cpp::Il2CppString(name);
	auto keyCompare = K::TM::m__(Tools::Il2Cpp::Il2CppString::New("Delete"))
		.As<Tools::Il2Cpp::Il2CppString>();

	if (std::wstring_view(nameStr.getChars(), nameStr.getLength()) != std::wstring_view(keyCompare.getChars(), keyCompare.getLength()))
	{
		return;
	}

	auto editModeUi = K::MVGameControllerBase::m_get_EditModeUI();
	auto editController = K::DesktopEditModeController::m_get_EditModeStateMachine(editModeUi);
	auto wo = K::EditorStateMachine::m_get_SingleSelectedWO(editController);
	for (auto& v : (Instance->Callbacks))
	{
		if (v->ShouldShow(wo))
		{
			auto _this = Tools::Il2Cpp::Il2CppObject(instance);
			auto fn = Helpers::DelegateUtils::CreateDelegate<K::UE_Events_UnityAction>(HandlerFn);
			
			auto array = Tools::Il2Cpp::Il2CppArray::New(I::Object::klass,2);
			
			auto ptrStruct = (intptr_t)v.get();

			auto pointer  = Tools::Il2Cpp::Il2CppObject::Box(&ptrStruct, I::IntPtr::klass);

			
			I::Array::m5_SetValue(array, pointer, 0);
			I::Array::m5_SetValue(array, _this, 1);

			I::Delegate::f_m_target.Set(fn, array);
			
			auto toolName = v->GetName();
			auto strNameIl2 = Tools::Il2Cpp::Il2CppString::NewLen(toolName.data(), static_cast<uint32_t>(toolName.size()));
			K::ContextMenu::m_AddButton(_this, strNameIl2, fn);
		}
	}
	
	
}


void KoGaMaTools::Services::ContextMenuService::Init(Core::DIContainer& di)
{

	Instance = di.Get<ContextMenuService>();

	auto logger = di.Get<LoggerService>();
	auto hookingService = di.Get<HookingService>();

	const char* module = "ContextMenuService";
	Helpers::HookHelper::HookDesc descs[] =
	{
		{(void**)KoGaMaAPI::KoGaMa::ContextMenu::m_AddButton.ptr, OnInitialize, (void**)&OnInitializeOld},
	};
	Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);
}

void KoGaMaTools::Services::ContextMenuService::SetupButtons()
{
	auto& di = Core::DIContainer::GetInstance();
	this->Callbacks = di.GetAllByInterface<IContextButtonAction>();
}

void KoGaMaTools::Services::ContextMenuService::HandlerFn(void* _del)
{
	auto del = Tools::Il2Cpp::Il2CppObject(_del);
	auto arr = Tools::Il2Cpp::ICalls::Delegate::m_get_Target(del);
	

	auto pointer = Tools::Il2Cpp::ICalls::Array::m5_GetValue(arr, 0);
	auto ctxMenu = Tools::Il2Cpp::ICalls::Array::m5_GetValue(arr, 1);

	

	auto woId = KoGaMaAPI::KoGaMa::ContextMenu::f_woID.Get<int>(ctxMenu);
	auto wocm = KoGaMaAPI::KoGaMa::MVGameControllerBase::m_get_WOCM();
	auto wo = KoGaMaAPI::KoGaMa::MVWorldObjectClientManager::m0_GetWorldObjectClient(wocm, woId);
	auto handler = reinterpret_cast<IContextButtonAction*>(pointer.Unbox<intptr_t>());
	handler->Execute(wo);

	KoGaMaAPI::KoGaMa::ContextMenu::m_Pop(ctxMenu);

}
