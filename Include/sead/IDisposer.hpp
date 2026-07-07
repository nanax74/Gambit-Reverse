#pragma once
#include <cstdint>

namespace sead
{
    class IDisposer
    {
    public:
        struct VTable
        {

        };

        uint8_t u0[0x10];
    };
}

static_assert(sizeof(sead::IDisposer) == 0x10, "Struct size is incorrect");