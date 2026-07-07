add_library(Game STATIC
    PlayerIncAction.cpp
)

target_include_directories(Game
    ${CMAKE_SOURCE_DIR}/Include
)