#pragma once
#include "Macro.hpp"

namespace Cmn
{
    class SceneLayoutMgr
    {
    public:
        BIND_METHOD(0x0E0D2080, void, registHandlers, SceneLayoutMgr)
        CONNECT_METHOD(registHandlers)
    };
}
