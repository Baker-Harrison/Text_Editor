cmake_minimum_required(VERSION 3.28)
project(Text_Editor)

set(CMAKE_CXX_STANDARD 17)

add_executable(Text_Editor main.cpp
        src/File.cpp
        include/File.h
        src/Date.cpp
        include/Date.h
        src/FileSystem.cpp
        include/FileSystem.h
        include/UI.h
        src/UI.cpp)
