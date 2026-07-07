add_subdirectory(Cmn)
add_subdirectory(Game)
add_subdirectory(sead)
add_subdirectory(Sys)
add_subdirectory(UI)
add_subdirectory(Utl)

add_library(Gambit INTERFACE

)

target_link_libraries(Gambit INTERFACE
    Cmn
    Game
    sead
    Sys
    UI
    Utl
)