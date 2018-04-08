cmake_minimum_required(VERSION 3.5)
project(exercice_04)

set(CMAKE_C_STANDARD 11)
Set(CMAKE_CXX_FLAGS "-std=c++11")

add_executable(exercice_04 main.cpp question1.h question2.h question3.h
        question4.h)
