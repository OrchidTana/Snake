set(open_new_window detail/OpenNewWindow.cpp
)

find_package(SFML REQUIRED COMPONENTS Audio Network Graphics System Window)

add_library(lib_open_new_window STATIC ${open_new_window})

target_include_directories(lib_open_new_window PRIVATE ${SFML_INCLUDE_DIRS})
target_link_libraries(lib_open_new_window PRIVATE
        SFML::Audio
        SFML::Network
        SFML::Graphics
        SFML::System
        SFML::Window
)

target_compile_definitions(lib_open_new_window PRIVATE SFML_STATIC)

