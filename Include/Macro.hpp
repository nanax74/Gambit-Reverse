#pragma once

#define OFFSET_TEXT 0x02000000
#define OFFSET_DATA 0x10000000

#define ADDRESS_TEXT(addr) addr + OFFSET_TEXT
#define ADDRESS_DATA(addr) addr + OFFSET_DATA

#define BIND_FUNCTION(addr, ret, name, ...) \
    inline static ret (*name)(__VA_ARGS__) = \
        reinterpret_cast<ret(*)(__VA_ARGS__)>(addr)

#define BIND_CONSTRUCTOR(addr, ClassName, ...) \
    inline static void (*Constructor__##ClassName)(ClassName *__VA_OPT__(, __VA_ARGS__)) = \
        reinterpret_cast<void(*)(ClassName *__VA_OPT__(, __VA_ARGS__))>(addr); \
    ClassName(__VA_ARGS__)

#define CONNECT_CONSTRUCTOR(ClassName, ...) \
    { \
        Constructor__##ClassName(this __VA_OPT__(, __VA_ARGS__)); \
    }

#define BIND_METHOD(addr, ret, name, ClassName, ...) \
    inline static ret (*Function__##name)(ClassName *__VA_OPT__(, __VA_ARGS__)) = \
        reinterpret_cast<ret(*)(ClassName *__VA_OPT__(, __VA_ARGS__))>(addr); \
    ret name(__VA_ARGS__)

#define CONNECT_METHOD(name, ...) \
    { \
        return Function__##name(this __VA_OPT__(, __VA_ARGS__)); \
    }

#define BIND_STATIC_METHOD(addr, ret, name, ...) \
    inline static ret (*Function__##name)(__VA_ARGS__) = \
        reinterpret_cast<ret(*)(__VA_ARGS__)>(addr); \
    static ret name(__VA_ARGS__)

#define CONNECT_STATIC_METHOD(name, ...) \
    { \
        return Function__##name(__VA_ARGS__); \
    }

#define VARIABLE(addr, type, name) \
    inline static type &name = *reinterpret_cast<type *>(addr)
    