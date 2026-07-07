#pragma once
#include <cstdint>
#include "Macro.hpp"

#include "UI/Page.hpp"
#include "sead/SafeStringBase.hpp"

namespace Cmn
{
    class TextSetter
    {
    public:
        uint8_t u0[0x254];

        BIND_CONSTRUCTOR(ADDRESS_TEXT(0x020C69E4), TextSetter, UI::Page * page, sead::SafeStringBase<char>* layoutName)
        CONNECT_CONSTRUCTOR(TextSetter, page, layoutName)

        BIND_METHOD(ADDRESS_TEXT(0x020C7D80), void, directSetUtf16, TextSetter, char16_t const * text)
        CONNECT_METHOD(directSetUtf16, text)
    };
}

static_assert(sizeof(Cmn::TextSetter) == 0x254, "Struct size is incorrect");