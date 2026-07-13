cmake_minimum_required(VERSION 3.23)

project(COMPUTATIONS LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex01 ex01.cpp)

add_executable(exo2 ex02.cpp)

add_executable(exo3 ex03.cpp)

add_executable(ex04 ex04.cpp)

add_executable(exo5 ex05.cpp)

add_executable(exo6 ex06.cpp)

add_executable(exo7 ex07.cpp)

add_executable(exo8 ex08.cpp)

# add_executable(exo9 ex09.cpp)

add_executable(enums enums.cpp)

#add_executable(enum enums_drill.cpp)

add_library(books book.cpp)

add_library(patron patron.cpp)


add_executable(libo library.cpp)

target_link_libraries(libo PRIVATE books patron)
#add_executable(library library.cpp)