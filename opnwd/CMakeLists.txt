set(opnwd detail/OpenNewWindow.cpp)

find_package(SFML REQUIRED COMPONENTS Audio Network Graphics System Window)

add_library(lib_opnwd STATIC ${opnwd})

target_include_directories(lib_opnwd PRIVATE ${SFML_INCLUDE_DIRS})
target_link_libraries(lib_opnwd PRIVATE
        SFML::Audio
        SFML::Network
        SFML::Graphics
        SFML::System
        SFML::Window
)

target_compile_definitions(lib_opnwd PRIVATE SFML_STATIC)

