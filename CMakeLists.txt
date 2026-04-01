cmake_minimum_required(VERSION 4.1)
project(game)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(domain)
add_subdirectory(app)

if(EXISTS "${ROOT_DIR}/resources")
    file(COPY "${ROOT_DIR}/resources" DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
endif()
