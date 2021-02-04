cmake_minimum_required(VERSION 3.17)
project(snake)

set(CMAKE_CXX_STANDARD 14)

add_executable(snake main.cpp FieldBase.cpp FieldBase.h)