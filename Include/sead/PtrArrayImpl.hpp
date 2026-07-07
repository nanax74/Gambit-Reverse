#pragma once
#include <cstdint>

namespace sead
{
    class PtrArrayImpl
    {
    public:
        uint32_t size;
        uint32_t count;
        void* pointer;
    };
}