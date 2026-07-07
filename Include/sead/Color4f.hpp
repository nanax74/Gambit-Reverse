#pragma once

namespace sead
{   
    struct Color4f
    {
        Color4f() : r(0), g(0), b(0), a(0) {}
        Color4f(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {}

        float r, g, b, a;

        static const Color4f black;
        static const Color4f white;
        static const Color4f red;
        static const Color4f green;
        static const Color4f blue;
    };

    inline const Color4f black{ 0.0f, 0.0f, 0.0f, 1.0f };
    inline const Color4f white{ 1.0f, 1.0f, 1.0f, 1.0f };
    inline const Color4f red{ 1.0f, 0.0f, 0.0f, 1.0f };
    inline const Color4f green{ 0.0f, 1.0f, 0.0f, 1.0f };
    inline const Color4f blue{ 0.0f, 0.0f, 1.0f, 1.0f };
}