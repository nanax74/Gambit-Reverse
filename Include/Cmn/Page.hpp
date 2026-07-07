#pragma once
#include <cstdint>

#include "UI/Page.hpp"

namespace Cmn
{
    class Page : public UI::Page
    {
    public:
        struct VTable : public UI::Page::VTable
        {
            uint8_t u0[0x14];
            void (*postInitialize)(Cmn::Page* t);
            uint8_t u1[0x68];
        };

        uint8_t u0[0x14];
    };
}

static_assert(sizeof(Cmn::Page) == 0x1DC, "Struct size is incorrect");
static_assert(sizeof(Cmn::Page::VTable) == 0x160, "Struct size is incorrect");