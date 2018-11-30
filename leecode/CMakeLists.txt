cmake_minimum_required(VERSION 3.12)
project(leecode)

set(CMAKE_CXX_STANDARD 14)
include_directories(./include/)
add_executable(leecode main.cpp ./include/twoSum.cpp include/addTwoNumbers.cpp)