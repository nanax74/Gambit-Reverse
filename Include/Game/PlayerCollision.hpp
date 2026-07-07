#pragma once
#include "Macro.hpp"

#include "Cmn/Def/DMG.hpp"
#include "Game/Player.hpp"
#include "Game/Bullet.hpp"
#include "sead/Vector3.hpp"

namespace Game
{
    class PlayerCollision
    {
    public:
        BIND_METHOD(ADDRESS_TEXT(0x0267B840), Cmn::Def::DMG, processDamageFromBullet_, PlayerCollision, Bullet* bullet, sead::Vector3<float>* knockback, Cmn::Def::DMG damage)
        CONNECT_METHOD(processDamageFromBullet_, bullet, knockback, damage)

        Game::Player* player;
    };
}