cmake_minimum_required(VERSION 3.16)
project(CPTS_223_CMake_Example)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_BUILD_TYPE Debug)

add_executable(CPTS_223_CMake_Example main.cpp factorial.cpp message.cpp)