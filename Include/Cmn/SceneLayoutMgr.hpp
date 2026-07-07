#pragma once
#include "Macro.hpp"

namespace Cmn
{
    class SceneLayoutMgr
    {
    public:
        BIND_METHOD(ADDRESS_TEXT(0x020D2080), void, registHandlers, SceneLayoutMgr)
        CONNECT_METHOD(registHandlers)
    };
}
