cmake_minimum_required(VERSION 3.5)
project(plus_minus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(../../../inc)
add_definitions(-DCATCH_CONFIG_MAIN)

set(SOURCE_FILES main.cpp)
add_executable(plus_minus ${SOURCE_FILES})
