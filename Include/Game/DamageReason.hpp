#pragma once
#include <cstdint>

namespace Game
{
    class DamageReason
    {
    public:
        uint16_t type;
        uint16_t group;
    };
}

static_assert(sizeof(Game::DamageReason) == 0x4, "Struct size is incorrect");