set(set_new_window detail/SetNewWindow.cpp)

find_package(SFML 3 COMPONENTS Audio Network Graphics System Window REQUIRED)

add_library(lib_set_new_window STATIC ${set_new_window})

target_include_directories(lib_set_new_window PRIVATE ${SFML_INCLUDE_DIRS})
target_link_libraries(lib_set_new_window PRIVATE
        SFML::Audio
        SFML::Network
        SFML::Graphics
        SFML::System
        SFML::Window
)

target_compile_definitions(lib_set_new_window PRIVATE SFML_STATIC)

