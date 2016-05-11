cmake_minimum_required(VERSION 3.5)
project(Algorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Eratosthense.cpp)
add_executable(Algorithms ${SOURCE_FILES})