#pragma once

namespace Sys
{
    class ActorBase
    {
    public:
        struct VTable
        {
            int p0;
            void *completeDtor;
            int p1;
            void *deletingDtor;
        };

        int unknown0;
        void* vtable;
    };
}

static_assert(sizeof(Sys::ActorBase) == 0x8, "Struct size is incorrect");