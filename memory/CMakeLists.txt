cmake_minimum_required(VERSION 3.23)

project(memory LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(mem mem.cpp lib.cpp)