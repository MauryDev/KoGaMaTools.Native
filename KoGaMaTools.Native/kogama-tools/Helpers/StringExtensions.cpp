#include "StringExtensions.h"

std::string KoGaMaTools::Helpers::ViewToNarrow(std::wstring_view wView)
{
    if (wView.empty()) return {};

    // 1. Determine the required buffer size (including null terminator)
    // We use wView.size() to tell the function exactly how many wide chars to read
    size_t sizeNeeded = 0;
    errno_t err = wcstombs_s(&sizeNeeded, nullptr, 0, wView.data(), wView.size());

    if (err != 0 || sizeNeeded == 0) return {};

    // 2. Allocate the buffer (sizeNeeded includes the null terminator)
    std::string result(sizeNeeded - 1, '\0');

    // 3. Perform the actual conversion
    size_t convertedChars = 0;
    err = wcstombs_s(&convertedChars, &result[0], sizeNeeded, wView.data(), wView.size());

    if (err != 0) return {};

    return result;
}
