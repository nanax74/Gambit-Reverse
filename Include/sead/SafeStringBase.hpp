#pragma once

#include "operator.hpp"

namespace sead
{
    template <typename T>
    class SafeStringBase
    {
    public:
        static void Function__deletingDtor(SafeStringBase* t, int flags)
        {
            if(!t) return;
            if((flags & 1) == 0) return;
            operator_delete(t);
        }

        static void Function__completeDtor(SafeStringBase* t) {}

        class VTable
        {
        public:
            int p0 = 0;
            void * u0 = nullptr;
            int p1 = 0;
            void (*deletingDtor)(SafeStringBase* t, int flags) = &Function__deletingDtor;
            int p2 = 0;
            void (*completeDtor)(SafeStringBase* t) = &Function__completeDtor;

            inline static VTable vtable{};
        };

        SafeStringBase(T const * str) : str(str), vtable(&VTable::vtable) {}

        T const * str;
        void * vtable;
    };
}