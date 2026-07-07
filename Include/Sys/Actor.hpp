#pragma once
#include <cstdint>

#include "Sys/ActorBase.hpp"

namespace Sys
{
    class Actor : public ActorBase
    {
    public:
        struct VTable : public ActorBase::VTable
        {
            int p0;
            void *checkDerivedRuntimeTypeInfo;
            int p1;
            void *getRuntimeTypeInfo;
            int p2;
            void *onLoad;
            int p3;
            void *onEnter;
            int p4;
            void *onReset;
            int p5;
            void *onExit;
            int p6;
            void *onFirstCalc;
            int p7;
            void *onSecondCalc;
            int p8;
            void *onThirdCalc;
            int p9;
            void *onFourthCalc;
            int p10;
            void *onFifthCalc;
            int p11;
            void *onSixthCalc;
            int p12;
            void *onSeventhCalc;
            int p13;
            void *onActivate;
            int p14;
            void *onSleep;
            int p15;
            void *getClassName;
            int p16;
            void *getModelRTMtx;
            int p17;
            void *getModelScale;
            int p18;
            void *firstCalc;
            int p19;
            void *secondCalc;
            int p20;
            void *thirdCalc;
            int p21;
            void *fourthCalc;
            int p22;
            void *fifthCalc;
            int p23;
            void *sixthCalc;
            int p24;
            void *seventhCalc;
            int p25;
            void *load;
            int p26;
            void *enter;
            int p27;
            void *reset;
            int p28;
            void *exit;
            int p29;
            void *activate;
            int p30;
            void *sleep;
            int p31;
            void *onXLinkCalc;
            int p32;
            void *xlinkCalc;
        };

        void* model;
        uint32_t calcSkipMask;
        uint32_t listNode[2];
        void* actorMgr;
        int unknown0[2];
        uint32_t index;
    };
}

static_assert(sizeof(Sys::Actor) == 0x28, "Struct size is incorrect");