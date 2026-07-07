#pragma once
#include <cstddef>
#include "Macro.hpp"

#include "operator.hpp"
#include "Cmn/TextSetter.hpp"
#include "Cmn/PlayerInfo.hpp"
#include "Cmn/InOutPage.hpp"

namespace Game
{
    class PlayerNamePage : public Cmn::InOutPage
    {
    public:
        struct VTable : public Cmn::InOutPage::VTable
        {

        };

        Cmn::TextSetter* textSetter;
        uint8_t u0[0x8];

        BIND_CONSTRUCTOR(0x0E48D344, PlayerNamePage)
        CONNECT_CONSTRUCTOR(PlayerNamePage)

        BIND_METHOD(0x0E48D3DC, void, setPlayerName, PlayerNamePage, Cmn::PlayerInfo * playerInfo)
        CONNECT_METHOD(setPlayerName, playerInfo)

        inline static void* operator new(size_t size)
        {
            return operator_new(size);
        }
    };
}

static_assert(sizeof(Game::PlayerNamePage) == 0x228, "Struct size is incorrect");