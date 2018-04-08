cmake_minimum_required(VERSION 3.5)
project(exercice_11)

set(CMAKE_C_STANDARD 11)
Set(CMAKE_CXX_FLAGS "-std=c++11")


add_executable(exercice_11 main.cpp mailbox.cpp mailbox.h)
