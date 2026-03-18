#pragma once
#include <Tools.Il2Cpp.ICalls.h>
namespace KoGaMaTools::Services
{
	
	struct ThemeUtils
	{
		static Tools::Il2Cpp::Il2CppObject CreateTheme(Tools::Il2Cpp::Il2CppString identifier);
		static void DestroyTheme(Tools::Il2Cpp::Il2CppObject theme);

		static std::vector<std::string> GetAllThemes();


	};
}