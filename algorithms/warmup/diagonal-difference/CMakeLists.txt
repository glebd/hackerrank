cmake_minimum_required(VERSION 3.5)
project(diagonal_difference)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(../../../inc)
add_definitions(-DCATCH_CONFIG_MAIN)

set(SOURCE_FILES main.cpp)
add_executable(diagonal_difference ${SOURCE_FILES})
