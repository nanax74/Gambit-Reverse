#pragma once
#include "Macro.hpp"
#include <cstdint>
#include <cstddef>

#include "Cmn/SceneLayoutMgr.hpp"
#include "UI/IRegistable.hpp"
#include "UI/Impl/Name.hpp"

namespace UI
{
    class PageHolder : public Impl::Name
    {
    public:
        struct VTable : public Impl::Name::VTable
        {
        public:
            int p0;
            void (*createPage)(PageHolder* t);
            uint8_t u0[0x44];
            Cmn::SceneLayoutMgr* (*getSceneLayoutMgr)(PageHolder* t);
            uint8_t u1[0x10];

            VARIABLE(0x10606FBC, PageHolder::VTable, vtable);
            VARIABLE(0x10607044, PageHolder::VTable, vtable_IRegistable);
        };

        uint8_t u0[0x8];
        IRegistable iRegistable; static constexpr const size_t offset__iRegistable = 0x10;
        uint8_t u1[0x14];

        BIND_CONSTRUCTOR(0x0E78A840, PageHolder, char const * name, int elementCount)
        CONNECT_CONSTRUCTOR(PageHolder, name, elementCount)

        void createPage() { reinterpret_cast<UI::PageHolder::VTable*>(vtable)->createPage(this); }
        Cmn::SceneLayoutMgr* getSceneLayoutMgr() { return reinterpret_cast<UI::PageHolder::VTable*>(vtable)->getSceneLayoutMgr(this); }
    };
}

static_assert(sizeof(UI::PageHolder) == 0x28, "Struct size is incorrect");
static_assert(sizeof(UI::PageHolder::VTable) == 0x78, "Struct size is incorrect");