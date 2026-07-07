#pragma once

namespace Game
{
    class Player;

    class PlayerParam
    {
    public:
        Game::Player* player;
        int u0[0x13];
        float field_0x50;
        int u1[0x15];
    };
}

static_assert(sizeof(Game::PlayerParam) == 0xA8, "Struct size is incorrect");