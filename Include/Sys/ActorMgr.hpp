#pragma once
#include <cstdint>

#include "Sys/Actor.hpp"

namespace Sys
{
    class ActorMgr : public Actor
    {
    public:
        struct VTable : public Actor::VTable
        {

        };

        int unknown0[0x37];
        uint8_t actorTypeTableByIndex[0x100];
        int unknown1[0xD];

    };
}

static_assert(sizeof(Sys::ActorMgr) == 0x238, "Struct size is incorrect");