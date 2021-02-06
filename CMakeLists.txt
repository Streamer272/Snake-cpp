cmake_minimum_required(VERSION 3.17)
project(Snake_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(Snake_cpp
        src/main.cpp src/InputController.cpp src/InputController.h)
