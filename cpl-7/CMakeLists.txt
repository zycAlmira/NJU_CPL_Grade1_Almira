cmake_minimum_required(VERSION 3.29)
project(C)

set(CMAKE_C_STANDARD 17)

add_executable(practise practise1.c)
add_executable(practise1.2 cmake-build-debug/practise1.2.c)
add_executable(practise2 practise2.c)
add_executable(task1 task1.c)
add_executable(task2 task2.c)
add_executable(task3 task3.c)
add_executable(task4 cmake-build-debug/task4.c)
