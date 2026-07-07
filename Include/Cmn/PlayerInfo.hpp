#pragma once
#include <cstdint>

namespace Cmn
{
    class PlayerInfo
    {
    public:
        uint8_t u0[0xEC];
    };
}

static_assert(sizeof(Cmn::PlayerInfo) == 0xEC, "Struct size is incorrect");