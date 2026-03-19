#include "Format.hpp"
#include <cstdio>

std::string Format::Size(uint64_t bytes)
{
    char buf[64];
    sprintf_s(buf, "%.2f MB", bytes / (1024.0 * 1024.0));
    return buf;
}