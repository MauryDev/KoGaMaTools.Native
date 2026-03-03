#pragma once
#include <Tools.Il2Cpp.Lib.h>

namespace KoGaMaTools::Helpers::DelegateUtils {
	Tools::Il2Cpp::Il2CppObject CreateDelegate(Tools::Il2Cpp::Il2CppClass classDelegate, void* func);
	template<typename TDelegate>
	inline Tools::Il2Cpp::Il2CppObject CreateDelegate(void* func)
	{
		return CreateDelegate(TDelegate::klass, func);
	}

}