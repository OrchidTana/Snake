set(app_snake main.cpp)
add_executable(game_snake main.cpp)
target_link_libraries(game_snake PRIVATE
        lib_open_new_window lib_set_new_window)

