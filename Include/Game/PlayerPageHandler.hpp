#pragma once
#include <cstdint>
#include "UI/PageHolder.hpp"
#include "Macro.hpp"

#include "Cmn/SceneLayoutMgr.hpp"

namespace Game
{
    class PlayerPageHandler : public UI::PageHolder
    {
    public:
        struct VTable : public UI::PageHolder::VTable
        {

        };

        uint8_t u1[0x40];

        BIND_METHOD(ADDRESS_TEXT(0x0248C0DC), void, createPage, PlayerPageHandler)
        CONNECT_METHOD(createPage)

        Cmn::SceneLayoutMgr* getSceneLayoutMgr() { return reinterpret_cast<Game::PlayerPageHandler::VTable*>(vtable)->getSceneLayoutMgr(this); }
    };
}

static_assert(sizeof(Game::PlayerPageHandler) == 0x68, "Struct size is incorrect");