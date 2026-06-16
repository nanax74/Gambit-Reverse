#pragma once

namespace sead
{   
    template <typename T>
    struct Vector3
    {
        T x, y, z;

        Vector3() : x(0), y(0), z(0) {}
        Vector3(T x, T y, T z) : x(x), y(y), z(z) {}

        static const Vector3<T> zero;
        static const Vector3<T> one;
        static const Vector3<T> forward;
    };

    template<typename T>
    inline const Vector3<T> Vector3<T>::zero = Vector3<T>(0, 0, 0);

    template<typename T>
    inline const Vector3<T> Vector3<T>::one = Vector3<T>(1, 1, 1);

    template<typename T>
    inline const Vector3<T> Vector3<T>::forward = Vector3<T>(1, 0, 0);
}