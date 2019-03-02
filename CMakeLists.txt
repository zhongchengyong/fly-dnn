cmake_minimum_required(VERSION 3.13)
project(fly_dnn)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(dnn)

add_executable(fly_dnn main.cpp)