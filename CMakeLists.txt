cmake_minimum_required(VERSION 3.12)
project(fly_dnn)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src/dnn)

add_executable(fly_dnn main.cpp)

target_link_libraries(fly_dnn dnn)

find_package(GTest REQUIRED)

enable_testing()

add_subdirectory(test)