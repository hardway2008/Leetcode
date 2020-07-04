
cmake_minimum_required(VERSION 3.1)
project(test_lru)
set(CMAKE_CXX_FLAGS "-std=c++11")
set(SOURCES 
    main.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})