cmake_minimum_required(VERSION 3.14)

project(game VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
find_package(SFML 2.5 
    COMPONENTS system window graphics network audio REQUIRED)

add_executable(game main.cpp)

target_include_directories(game
    PRIVATE "${PROJECT_BINARY_DIR}")

target_link_libraries(game sfml-graphics sfml-system)

install(TARGETS game DESTINATION bin)