#pragma once
#include "Macro.hpp"

#include "Cmn/Page.hpp"

namespace Cmn
{
    class BtnPage : public Page
    {
    public:
        struct VTable : public Page::VTable
        {
            int p0;
            void (*show)(Cmn::BtnPage* t);
            int p1;
            void (*kill)(Cmn::BtnPage* t);
            uint8_t u1[0x14];
            bool (*isAppeared)(Cmn::BtnPage* t);
            uint8_t u2[0x58];

            VARIABLE(ADDRESS_DATA(0x10018714), BtnPage::VTable, vtable);
        };

        uint8_t u0[0x40];

        void show() { reinterpret_cast<Cmn::BtnPage::VTable*>(vtable)->show(this); }
        void kill() { reinterpret_cast<Cmn::BtnPage::VTable*>(vtable)->kill(this); }
        bool isAppeared() { return reinterpret_cast<Cmn::BtnPage::VTable*>(vtable)->isAppeared(this); }

        BtnPage(){} // dummy

        BIND_CONSTRUCTOR(ADDRESS_TEXT(0x020D6824), BtnPage, char const * layoutName, int u0, int u1)
        CONNECT_CONSTRUCTOR(BtnPage, layoutName, u0, u1)
    };
}

static_assert(sizeof(Cmn::BtnPage) == 0x21C, "Struct size is incorrect");
static_assert(sizeof(Cmn::BtnPage::VTable) == 0x1E0, "Struct size is incorrect");