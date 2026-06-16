#pragma once
#include <cstdint>
#include "Macro.hpp"

#include "Game/DamageReason.hpp"
#include "Cmn/Def/DMG.hpp"
#include "sead/Vector3.hpp"

namespace Game
{
    class PlayerCloneHandle
    {
    public:
        BIND_METHOD(0x0E676D74, bool, sendAttackEvent_Player, PlayerCloneHandle,
            Cmn::Def::DMG damage, int attackerIndex, int victimIndex, int generationIndex,
            sead::Vector3<float>* knockback, Game::DamageReason* reason, bool u0, uint8_t u1)
        CONNECT_METHOD(sendAttackEvent_Player, damage, attackerIndex, victimIndex, generationIndex, knockback, reason, u0, u1)
    };
}