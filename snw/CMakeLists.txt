set(snw detail/SetNewWindow.cpp)

find_package(SFML 3 COMPONENTS Audio Network Graphics System Window REQUIRED)

add_library(lib_snw STATIC ${snw})

target_include_directories(lib_snw PRIVATE ${SFML_INCLUDE_DIRS})
target_link_libraries(lib_snw PRIVATE
        SFML::Audio
        SFML::Network
        SFML::Graphics
        SFML::System
        SFML::Window
)

target_compile_definitions(lib_snw PRIVATE SFML_STATIC)

