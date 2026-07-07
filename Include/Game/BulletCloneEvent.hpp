#pragma once
#include <cstdint>

namespace Game
{
    class BulletCloneEvent
    {
    public:
        enum class Type : uint8_t
        {
            Charge_Normal_00 = 0x35,
            Charge_Normal_01 = 0x36,
            Charge_Normal_02 = 0x37,
            Charge_Normal_H = 0x38
        };
    };
}