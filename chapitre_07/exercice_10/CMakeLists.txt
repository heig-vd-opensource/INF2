cmake_minimum_required(VERSION 3.5)
project(exercice_10)

set(CMAKE_C_STANDARD 11)
Set(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(exercice_10 main.cpp message.cpp message.h)
