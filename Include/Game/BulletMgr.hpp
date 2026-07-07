#pragma once
#include "Macro.hpp"

#include "Sys/ActorMgr.hpp"
#include "Game/Bullet.hpp"
#include "sead/Vector3.hpp"

namespace Game
{
    class BulletMgr : public Sys::ActorMgr
    {
    public:
        enum class BulletType : uint8_t
        {
            Invalid = 0xFF
        };

        BIND_METHOD(0x0E2302D8, Bullet*, activateOneCancelUnnecessary, BulletMgr, BulletType type, bool hasOwner, sead::Vector3<float> *position, sead::Vector3<float> *velocity)
        CONNECT_METHOD(activateOneCancelUnnecessary, type, hasOwner, position, velocity)

        int unknown[0xE];
    };
}

static_assert(sizeof(Game::BulletMgr) == 0x270, "Struct size is incorrect");