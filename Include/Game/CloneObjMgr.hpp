#pragma once
#include "Macro.hpp"

#include "sead/PtrArrayImpl.hpp"

namespace Game
{
    class CloneObjMgr
    {
    public:
        uint8_t u0[0x78];
        sead::PtrArrayImpl bulletCloneHandleArray;

        VARIABLE(ADDRESS_DATA(0x101E22AC), CloneObjMgr*, sInstance);
    };
}