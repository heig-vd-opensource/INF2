cmake_minimum_required(VERSION 3.10)
project(exercice_07)

set(CMAKE_C_STANDARD 11)

Set(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(exercice_07 main.cpp c.cpp c.h)
