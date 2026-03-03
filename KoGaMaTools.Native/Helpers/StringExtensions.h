#pragma once
#include <string>
#include <string_view>

namespace KoGaMaTools::Helpers {
	std::string ViewToNarrow(std::wstring_view wView);
}