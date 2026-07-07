#pragma once
#include <cstdint>

namespace UI::Impl
{
    class Name
    {
    public:
        struct VTable
        {
        public:
            int p0;
            void *completeDtor;
            int p1;
            void *getName;
            int p2;
            void *deletingDtor;
        };

        void* vtable;
        uint8_t u0[0x4];
    };
}

static_assert(sizeof(UI::Impl::Name) == 0x8, "Struct size is incorrect");
static_assert(sizeof(UI::Impl::Name::VTable) == 0x18, "Struct size is incorrect");