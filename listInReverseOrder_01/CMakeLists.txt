cmake_minimum_required(VERSION 3.15)
project(listInReverseOrder_01 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(listInReverseOrder_01
        listModule.c
        listModule.h
        main.c)
