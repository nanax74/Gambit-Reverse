add_library(Game STATIC
    PlayerInkAction.cpp
)

target_include_directories(Game PRIVATE
    ${CMAKE_SOURCE_DIR}/Gambit-Reverse/Include
)