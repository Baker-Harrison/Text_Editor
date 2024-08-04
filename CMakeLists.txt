cmake_minimum_required(VERSION 3.28)
project(Text_Editor)

set(CMAKE_CXX_STANDARD 17)

add_executable(Text_Editor main.cpp
        File.cpp
        File.h)
