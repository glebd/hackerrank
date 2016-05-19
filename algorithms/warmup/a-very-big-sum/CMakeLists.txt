cmake_minimum_required(VERSION 3.5)
project(a_very_big_sum)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(../../../inc)
add_definitions(-DCATCH_CONFIG_MAIN)

set(SOURCE_FILES main.cpp)
add_executable(a_very_big_sum ${SOURCE_FILES})
