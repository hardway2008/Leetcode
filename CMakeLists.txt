cmake_minimum_required(VERSION 3.15)
project(leetcode_src CXX C)

set(CMAKE_CXX_FLAGS "-std=c++11 -g")
add_subdirectory(src/queue)
add_subdirectory(src/strings)
add_subdirectory(src/tree)
add_subdirectory(src/list)