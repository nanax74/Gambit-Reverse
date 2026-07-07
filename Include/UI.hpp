// Incompletely decompiled symbols
#pragma once

#include "../UI/Page.hpp"
#include "../sead/Vector2.hpp"

namespace UI
{
    inline static void (*Function__setPosition)(Page * page, sead::Vector2<float> const * position)
        = reinterpret_cast<void (*)(Page *page, sead::Vector2<float> const * position)>(0x0E8B8150);

    inline static void (*Function__setScale)(Page * page, sead::Vector2<float> const * scale)
        = reinterpret_cast<void (*)(Page *page, sead::Vector2<float> const * scale)>(0x0E8B81C0);

    inline static void (*Function__request)(Page * page, int u0, int u1)
        = reinterpret_cast<void (*)(Page * page, int u0, int u1)>(0x0E8B8074);

    inline static void setPosition(Page *page, sead::Vector2<float> const * position)
    {
        Function__setPosition(page, position);
    }

    inline static void setScale(Page *page, sead::Vector2<float> const * scale)
    {
        Function__setScale(page, scale);
    }

    inline static void request(Page * page, int u0, int u1)
    {
        Function__request(page, u0, u1);
    }
}