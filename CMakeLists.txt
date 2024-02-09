cmake_minimum_required(VERSION 3.0)
project(task1)

if(USE_FLOAT)
    add_definitions(-DTYPE_FLOAT)
endif()

add_executable(task1 main.cpp)