cmake_minimum_required(VERSION 3.10.1)

#set(CMAKE_C_COMPILE C:/msys64/ucrt64/bin/gcc.exe)
#set(CMAKE_CXX_COMPILER C:/msys64/ucrt64/bin/g++.exe)

project(smart_test)
add_subdirectory(../ testlibs)
add_subdirectory(../../src composite)
include_directories(../../src/)
set(CMAKE_CURRENT_SOURCE_DIR "../../")
set(SRC general_tests.cpp)
add_executable(${PROJECT_NAME} ${SRC})
target_link_libraries(${PROJECT_NAME} composite gtest gmock gmock_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})