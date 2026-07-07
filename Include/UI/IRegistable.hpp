#pragma once
#include <cstdint>

namespace UI
{
    class IRegistable
    {
    public:
        class VTable
        {
        public:
            uint8_t u0[0xC];
            void (*createPage)(IRegistable* t);
            uint8_t u1[0x58];
        };

        void* vtable;
    };
}

static_assert(sizeof(UI::IRegistable::VTable) == 0x68, "Struct size is incorrect");