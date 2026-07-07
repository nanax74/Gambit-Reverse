#pragma once

namespace sead
{   
    template <typename T>
    struct Matrix44
    {
        T m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33;

        Matrix44() : m00(0), m01(0), m02(0), m03(0), m10(0), m11(0), m12(0), m13(0), m20(0), m21(0), m22(0), m23(0), m30(0), m31(0), m32(0), m33(0) {}
    };
}