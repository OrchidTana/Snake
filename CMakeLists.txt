cmake_minimum_required(VERSION 4.1)
project(Snake)

set(CMAKE_CXX_STANDARD 20)

set(ROOT_DIR "/Users/laplace/projects01/Snake")
include_directories(${ROOT_DIR})
add_executable(Snake main.cpp)

target_link_libraries(Snake lib_opnwd)
add_subdirectory(opnwd)
