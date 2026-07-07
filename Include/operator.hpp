#pragma once
#include "../Macro.hpp"
#include <cstddef>

BIND_FUNCTION(ADDRESS_TEXT(0x028CD9F0), void*, operator_new, size_t size);
BIND_FUNCTION(ADDRESS_TEXT(0x028CDAA8), void*, operator_delete, void *ptr);