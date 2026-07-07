#pragma once
#include "Macro.hpp"

#include "Sys/ActorMgr.hpp"
#include "Game/Player.hpp"

namespace Game
{
    class PlayerMgr : public Sys::ActorMgr
    {
    public:
        struct VTable : public Sys::ActorMgr::VTable
        {

        };

        BIND_METHOD(0x0E6BA4D8, Game::Player*, getPerformerAt, PlayerMgr, int index)
        CONNECT_METHOD(getPerformerAt, index)

        BIND_METHOD(0x0E6BA754, int, getControlledPerformerIdx, PlayerMgr)
        CONNECT_METHOD(getControlledPerformerIdx)

        uint8_t u0[0x78];
        int controlledPerformerIdx;
        uint8_t u1[0x80];
    };
}

static_assert(sizeof(Game::PlayerMgr) == 0x334, "Struct size is incorrect");