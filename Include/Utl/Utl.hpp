// Incompletely decompiled symbols
#pragma once

#include "Cmn/SceneLayoutMgr.hpp"
#include "UI/IRegistable.hpp"

namespace Utl
{
    inline static void (*Function__registPageHandler)(Cmn::SceneLayoutMgr * sceneLayoutMgr, UI::IRegistable * iRegistable, int u0)
        = reinterpret_cast<void (*)(Cmn::SceneLayoutMgr * sceneLayoutMgr, UI::IRegistable * iRegistable, int u0)>(0x0E8BB150);

    inline static void registPageHandler(Cmn::SceneLayoutMgr * sceneLayoutMgr, UI::IRegistable * iRegistable, int u0)
    {
        Function__registPageHandler(sceneLayoutMgr, iRegistable, u0);
    }
}