#pragma once
#include <cstdint>
#include "Macro.hpp"

#include "Game/BulletCloneEvent.hpp"
#include "sead/Vector3.hpp"

namespace Game
{
    class BulletCloneHandle
    {
    public:
        BIND_METHOD(0x0E670B80, uint32_t, sendEvent_ShotBullet_C,
            BulletCloneHandle, uint8_t playerIdx, sead::Vector3<float>* position, sead::Vector3<float>* velocity,
            Game::BulletCloneEvent::Type type, uint16_t chargeParam)
        CONNECT_METHOD(sendEvent_ShotBullet_C, playerIdx, position, velocity, type, chargeParam)

        BIND_METHOD(0x0E671E84, uint32_t, sendEvent_ShotBombInstant,
            BulletCloneHandle, uint8_t playerIdx, sead::Vector3<float>* position, sead::Vector3<float>* velocity)
        CONNECT_METHOD(sendEvent_ShotBombInstant, playerIdx, position, velocity)
    };
}