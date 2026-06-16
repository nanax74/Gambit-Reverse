#pragma once
#include "Macro.hpp"
#include <cstdint>

#include "Game/BulletBombBase.hpp"

namespace Game
{
    class BulletBombInstant : public BulletBombBase
    {
    public:
        VARIABLE(0x106E4600, int, sActorTypeIndex);
    
        struct VTable : public Game::BulletBombBase::VTable
        {

        };

        int u0[0x2];
    };
}

static_assert(sizeof(Game::BulletBombInstant) == 0x250, "Struct size is incorrect");