add_subdirectory(Cmn)
add_subdirectory(Game)
add_subdirectory(sead)
add_subdirectory(Sys)
add_subdirectory(UI)
add_subdirectory(Utl)

add_library(Gambit STATIC

)

target_link_libraries(Gambit PUBLIC
    Cmn
    Game
    sead
    Sys
    UI
    Utl
)