#pragma once
#include "../Macro.hpp"
#include <cstddef>

BIND_FUNCTION(0x0E8CD9F0, void*, operator_new, size_t size);
BIND_FUNCTION(0x0E8CDAA8, void*, operator_delete, void *ptr);