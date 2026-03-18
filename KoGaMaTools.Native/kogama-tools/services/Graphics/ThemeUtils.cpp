#include "ThemeUtils.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>


Tools::Il2Cpp::Il2CppObject KoGaMaTools::Services::ThemeUtils::CreateTheme(Tools::Il2Cpp::Il2CppString identifier)
{
	namespace K = KoGaMaAPI::KoGaMa;
	auto themeRepository = K::ThemeRepository::m_get_Instance();
	if (themeRepository.isNull()) return nullptr;

	auto themeTemp = K::ThemeRepository::m_CreateTemporaryThemeVisualization(themeRepository, identifier);
	
	
	
	return themeTemp;
}

void KoGaMaTools::Services::ThemeUtils::DestroyTheme(Tools::Il2Cpp::Il2CppObject theme)
{
	namespace K = KoGaMaAPI::KoGaMa;
	auto themeRepository = K::ThemeRepository::m_get_Instance();
	if (themeRepository.isNull()) return;
	K::ThemeRepository::m_DestroyTemporary(themeRepository, theme);

}

std::vector<std::string> KoGaMaTools::Services::ThemeUtils::GetAllThemes()
{
	namespace K = KoGaMaAPI::KoGaMa;

	auto themeRepository = K::ThemeRepository::m_get_Instance();
	if (themeRepository.isNull()) return std::vector<std::string>();

	auto identifierToTheme = K::ThemeRepository::f_IdentifierToTheme.Get<Tools::Il2Cpp::Il2CppObject>(themeRepository);
	if (identifierToTheme.isNull()) return std::vector<std::string>();

	auto collectionKeys = Tools::Il2Cpp::ICalls::IDictionary::m_get_Keys(identifierToTheme);
	if (collectionKeys.isNull()) return std::vector<std::string>();

	auto ienumerator = Tools::Il2Cpp::ICalls::IEnumerable::m_GetEnumerator(collectionKeys);
	if (ienumerator.isNull()) return std::vector<std::string>();

	std::vector<std::string> ret;
	while (Tools::Il2Cpp::ICalls::IEnumerator::m_MoveNext(ienumerator).Unbox<bool>())
	{
		auto current = Tools::Il2Cpp::ICalls::IEnumerator::m_get_Current(ienumerator).
			As<Tools::Il2Cpp::Il2CppString>();

		
		ret.push_back(Tools::Il2Cpp::Utils::convert_il2cpstring_to_char_array(current));
	}
	return ret;
}
