#pragma once
#include "Macro.hpp"

VARIABLE(ADDRESS_DATA(0x101D0888), const float, M_PI);

BIND_FUNCTION(ADDRESS_TEXT(0x02D53CA8), float, sinf, float x);
BIND_FUNCTION(ADDRESS_TEXT(0x02D544DC), float, cosf, float x);