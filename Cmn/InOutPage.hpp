#pragma once
#include "Macro.hpp"

#include "Cmn/Page.hpp"

namespace Cmn
{
    class InOutPage : public Page
    {
    public:
        struct VTable : public Page::VTable
        {
            int p0;
            void (*show)(Cmn::InOutPage* t);
            int p1;
            void (*kill)(Cmn::InOutPage* t);
            uint8_t u1[0x14];
            bool (*isAppeared)(Cmn::InOutPage* t);
            uint8_t u2[0x58];

            VARIABLE(0x1051B714, InOutPage::VTable, vtable);
        };

        uint8_t u0[0x40];

        void show() { reinterpret_cast<Cmn::InOutPage::VTable*>(vtable)->show(this); }
        void kill() { reinterpret_cast<Cmn::InOutPage::VTable*>(vtable)->kill(this); }
        bool isAppeared() { return reinterpret_cast<Cmn::InOutPage::VTable*>(vtable)->isAppeared(this); }

        InOutPage(){} // dummy

        BIND_CONSTRUCTOR(0x0E0D6824, InOutPage, char const * layoutName, int u0, int u1)
        CONNECT_CONSTRUCTOR(InOutPage, layoutName, u0, u1)
    };
}

static_assert(sizeof(Cmn::InOutPage) == 0x21C, "Struct size is incorrect");
static_assert(sizeof(Cmn::InOutPage::VTable) == 0x1E0, "Struct size is incorrect");