cmake_minimum_required(VERSION 3.27)
project(student_system C)

set(CMAKE_C_STANDARD 11)

add_executable(student_system main.c
        MString/MString.h
        MString/MString.c)
