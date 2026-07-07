#pragma once

namespace sead
{   
    template <typename T>
    struct BoundBox3
    {
        T minX, minY, minZ, maxX, maxY, maxZ;

        BoundBox3() : minX(0), minY(0), minZ(0), maxX(0), maxY(0), maxZ(0) {}
    };
}