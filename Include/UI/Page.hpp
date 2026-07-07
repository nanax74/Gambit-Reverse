#pragma once
#include "Macro.hpp"
#include <cstdint>

#include "Cmn/SceneLayoutMgr.hpp"
#include "UI/Impl/Name.hpp"
#include "sead/IDisposer.hpp"

namespace UI
{
    class Page : public Impl::Name
    {
    public:
        class InitializeArg
        {
        public:
            BIND_CONSTRUCTOR(ADDRESS_TEXT(0x02783AA4), InitializeArg, Cmn::SceneLayoutMgr* sceneLayoutMgr)
            CONNECT_CONSTRUCTOR(InitializeArg, sceneLayoutMgr)

            BIND_METHOD(ADDRESS_TEXT(0x02783D90), void, add, InitializeArg, int jobType, int u1)
            CONNECT_METHOD(add, jobType, u1)

            uint8_t u0[0xA8];
        };

        struct VTable : public Impl::Name::VTable
        {
        public:
            uint8_t u0[0x1C];
            void (*onInitialize)(Page* t, InitializeArg* arg);
            uint8_t u1[0xA8];
        };

        uint8_t u0[0x8];
        sead::IDisposer iDisposer;
        uint8_t u1[0x1A8];

        void onInitialize(InitializeArg* arg) { reinterpret_cast<UI::Page::VTable*>(vtable)->onInitialize(this, arg); }
    };
}

static_assert(sizeof(UI::Page) == 0x1C8, "Struct size is incorrect");
static_assert(sizeof(UI::Page::VTable) == 0xE0, "Struct size is incorrect");
static_assert(sizeof(UI::Page::InitializeArg) == 0xA8, "Struct size is incorrect");