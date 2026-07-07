#pragma once
#include <cstdint>
#include <cstddef>
#include <cstdarg>
#include "Macro.hpp"

namespace sead
{
    class StringUtil
    {
    public:
        BIND_STATIC_METHOD(0x0E8F64FC, void, vsnprintf, char const * buffer, size_t size, char const * format, va_list args)
        CONNECT_STATIC_METHOD(vsnprintf, buffer, size, format, args)

        static void snprintf(char const * buffer, size_t size, char const * format, ...)
        {
            va_list arg;
            va_start(arg, format);
            Function__vsnprintf(buffer, size, format, arg);
            va_end(arg);
        }

        BIND_STATIC_METHOD(0x0E8F8C8C, int, convertUtf8ToUtf16, char16_t * outUtf16, uint32_t stringLengthUtf16, char const * inUtf8, int byteSizeUtf8)
        CONNECT_STATIC_METHOD(convertUtf8ToUtf16, outUtf16, stringLengthUtf16, inUtf8, byteSizeUtf8)
    };
}