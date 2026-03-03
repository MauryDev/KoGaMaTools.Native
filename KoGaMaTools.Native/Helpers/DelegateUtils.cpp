#include "DelegateUtils.h"
#include <Tools.Il2Cpp.ICalls.h>

Tools::Il2Cpp::Il2CppObject KoGaMaTools::Helpers::DelegateUtils::CreateDelegate(Tools::Il2Cpp::Il2CppClass classDelegate, void* func)
{
	auto delegateObj = Tools::Il2Cpp::Il2CppObject::New(classDelegate);
	auto invoke = classDelegate.getMethod(Tools::Il2Cpp::MethodInfoDesc("Invoke"));
	delegateObj.Invoke(Tools::Il2Cpp::MethodInfoDesc(".ctor", 2), delegateObj, delegateObj, invoke);
	Tools::Il2Cpp::ICalls::Delegate::f_invoke_impl.Set(delegateObj, func);
	Tools::Il2Cpp::ICalls::Delegate::f_method_ptr.Set(delegateObj, func);
	Tools::Il2Cpp::ICalls::Delegate::f_method_code.Set(delegateObj, delegateObj.ptr);
	Tools::Il2Cpp::ICalls::Delegate::f_method_info.Set(delegateObj, invoke.getObject());
	return delegateObj;
}
