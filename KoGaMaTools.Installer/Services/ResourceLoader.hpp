#pragma once
#include <vector>

class ResourceLoader {
public:
    static std::vector<uint8_t> GetResourceBytes(int resourceId);
};