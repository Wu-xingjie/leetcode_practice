cmake_minimum_required(VERSION 3.10)
project(practice_3 CXX)
set(CMAKE_CXX_STANDARD 11)

add_library(link SHARED del_link.cpp)
add_executable(test main.cpp)

target_link_libraries(test link)

set(CMAKE_BUILD_TYPE debug)