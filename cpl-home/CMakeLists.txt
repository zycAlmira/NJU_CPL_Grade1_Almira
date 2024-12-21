cmake_minimum_required(VERSION 3.29)
project(C)

set(CMAKE_C_STANDARD 17)

add_executable(huanshu huanshu.c)
add_executable(piano cmake-build-debug/piano.c)
add_executable(try try.c)
add_executable(test2task2 test2task2.c)
