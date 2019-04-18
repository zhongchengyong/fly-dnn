cmake_minimum_required(VERSION 3.12)
project(fly_dnn)

set(CMAKE_CXX_STANDARD 14)

option(BUILD_TESTS "Set to ON to build tests" ON)

find_package(Boost REQUIRED)

if (NOT Boost_FOUND)
    MESSAGE("Boost not found")
endif ()

include_directories(src)
include_directories(${Boost_INCLUDE_DIRS})

add_subdirectory(src/dnn)

if (BUILD_TESTS)
    find_package(GTest REQUIRED)
    enable_testing()
    add_subdirectory(test)
endif (BUILD_TESTS)

add_executable(fly_dnn main.cpp)

target_link_libraries(fly_dnn dnn ${Boost_LIBRARIES})
