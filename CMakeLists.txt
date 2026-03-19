cmake_minimum_required(VERSION 4.1)
project(Snake)

set(CMAKE_CXX_STANDARD 20)

#set(ROOT_DIR "/Users/laplace/projects01/Snake")
set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(opnwd)
add_subdirectory(snw)

add_executable(Snake main.cpp)


#include_directories(${ROOT_DIR})
target_include_directories(Snake PRIVATE
        ${ROOT_DIR}
        ${ROOT_DIR}/opnwd/include
        ${ROOT_DIR}/snw/include
)

target_link_libraries(Snake PRIVATE lib_opnwd lib_snw)

if(EXISTS "${ROOT_DIR}/resources")
    file(COPY "${ROOT_DIR}/resources" DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
endif()


