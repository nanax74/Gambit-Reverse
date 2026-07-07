#pragma once
#include "Macro.hpp"

#include "Sys/ActorMgr.hpp"
#include "Game/BulletMgr.hpp"
#include "Game/PlayerMgr.hpp"

namespace Game
{
    class MainMgrBase : public Sys::ActorMgr
    {
    public:
        struct VTable : public Sys::ActorMgr::VTable
        {
            void* u0[0x5];
            int(*getGameFrame)(MainMgrBase* t);
        };

        int unknown0[0xB];
        void* mapObjMgr;
        PlayerMgr* playerMgr;
        void* enemyMgr;
        int unknown1;
        BulletMgr* bulletMgr;
        int unknown2;
        void* mainWeaponMgr;
        int unknown3[0xC];
        void* rivalMgr;
        int unknown4[0x8];

        VARIABLE(0x106E5814, MainMgrBase*, sInstance);

        int getGameFrame() { return reinterpret_cast<Game::MainMgrBase::VTable*>(vtable)->getGameFrame(this); }
    };
}

static_assert(sizeof(Game::MainMgrBase) == 0x2D4, "Struct size is incorrect");