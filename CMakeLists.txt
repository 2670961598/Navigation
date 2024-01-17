cmake_minimum_required(VERSION 3.26)
project(Navigation)

set(CMAKE_CXX_STANDARD 23)

add_executable(Navigation main.cpp
        Navigation.cpp
        Navigation.h
        global_planner.cpp
        global_planner.h
        local_planner.cpp
        local_planner.h
        json.cpp
        json.h)
