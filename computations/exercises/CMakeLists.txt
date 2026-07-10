cmake_minimum_required(VERSION 3.23)

project(COMPUTATIONS LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex01 ex01.cpp "book.h")

add_executable(exo2 ex02.cpp "book.h")

add_executable(exo3 ex03.cpp "book.h")

add_executable(ex04 ex04.cpp "book.h")

add_executable(exo5 ex05.cpp "book.h")

add_executable(exo6 ex06.cpp "book.h")

add_executable(exo7 ex07.cpp "book.h")

add_executable(exo8 ex08.cpp "book.h")

# add_executable(exo9 ex09.cpp)

add_executable(enums enums.cpp "book.h")

#add_executable(enum enums_drill.cpp "book.h")

add_executable(books book.cpp "book.h")

add_executable(patron patron.cpp "book.h")


add_executable(libo library.cpp "book.h")

#add_executable(library library.cpp "book.h")