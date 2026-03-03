#include "ContextMenuService.h"
#include <MinHook.h>
#include "../LoggerService.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>
#include "../../Helpers/DelegateUtils.h"
#include "TextCommandService.h"
namespace {
	void(*OnInitializeOld)(void* instance, void* name, void* unityAction);
}
void KoGaMaTools::Services::ContextMenuService::OnInitialize(void* instance, void* name, void* unityAction)
{
	OnInitializeOld(instance, name, unityAction);

	auto nameStr = Tools::Il2Cpp::Il2CppString(name);
	auto keyCompare = KoGaMaAPI::KoGaMa::TM::m__(Tools::Il2Cpp::Il2CppString::New("Delete"))
		.As<Tools::Il2Cpp::Il2CppString>();

	if (std::wstring_view(nameStr.getChars(), nameStr.getLength()) != std::wstring_view(keyCompare.getChars(), keyCompare.getLength()))
	{
		return;
	}

	using namespace KoGaMaAPI::KoGaMa;
	auto editModeUi = MVGameControllerBase::m_get_EditModeUI();
	auto editController = DesktopEditModeController::m_get_EditModeStateMachine(editModeUi);
	auto wo = EditorStateMachine::m_get_SingleSelectedWO(editController);
	for (auto& v : (Instance->Callbacks))
	{
		if (v->ShouldShow(wo))
		{
			auto _this = Tools::Il2Cpp::Il2CppObject(instance);
			auto fn = Helpers::DelegateUtils::CreateDelegate<KoGaMaAPI::KoGaMa::UE_Events_UnityAction>(HandlerFn);
			
			auto array = Tools::Il2Cpp::Il2CppArray::New(Tools::Il2Cpp::ICalls::Object::klass,2);
			
			auto ptrStruct = (intptr_t)v.get();

			auto pointer  = Tools::Il2Cpp::Il2CppObject::Box(&ptrStruct, Tools::Il2Cpp::ICalls::IntPtr::klass);

			
			Tools::Il2Cpp::ICalls::Array::m5_SetValue(array, pointer, 0);
			Tools::Il2Cpp::ICalls::Array::m5_SetValue(array, _this, 1);

			Tools::Il2Cpp::ICalls::Delegate::f_m_target.Set(fn, array);
			
			auto toolName = v->GetName();
			KoGaMaAPI::KoGaMa::ContextMenu::m_AddButton(_this, Tools::Il2Cpp::Il2CppString::NewLen(toolName.data(), toolName.size()), fn);
		}
	}
	
	
}


void KoGaMaTools::Services::ContextMenuService::Init(Core::DIContainer& di)
{
	struct Teste: IContextAction {
		void Execute(Tools::Il2Cpp::Il2CppObject wo) override {
			TextCommandService::NotifyUser("Teste Clicked");
		}
		bool ShouldShow(Tools::Il2Cpp::Il2CppObject wo) override { return true; }
		std::string_view GetName() override {
			return "Teste";
		}
	};
	Instance = di.Get<ContextMenuService>();

	auto logger = di.Get<LoggerService>();
	auto methodPtr = (void**)KoGaMaAPI::KoGaMa::ContextMenu::m_AddButton.ptr;
	logger->Assert(methodPtr != nullptr, "[ContextMenuService] - Null target");
	logger->Assert(*methodPtr != nullptr, "[ContextMenuService] - Method Pointer is null");


	logger->Assert(
		MH_CreateHook(
			*methodPtr,
			OnInitialize,
			(void**)&OnInitializeOld
		) == MH_OK,
		"[ContextMenuService] - CreateHook"
	);
	logger->Assert(
		MH_EnableHook(*methodPtr) == MH_OK,
		"[ContextMenuService] - EnableHook"
	);

	this->Callbacks.push_back(std::make_shared<Teste>());
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
	auto handler = reinterpret_cast<IContextAction*>(pointer.Unbox<intptr_t>());
	handler->Execute(wo);

	KoGaMaAPI::KoGaMa::ContextMenu::m_Pop(ctxMenu);

}
