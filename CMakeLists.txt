cmake_minimum_required(VERSION 3.10.1)
project(composite_DP)
include_directories(./src/)
add_executable(${PROJECT_NAME} main.cpp src/Composite.cpp)