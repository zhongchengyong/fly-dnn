cmake_minimum_required(VERSION 3.12)
project(fly_dnn)

set(CMAKE_CXX_STANDARD 14)

find_package(GTest REQUIRED)

find_package(Boost REQUIRED)

if (NOT Boost_FOUND)
    MESSAGE("Boost not found")
endif ()

include_directories(${Boost_INCLUDE_DIRS})
message("${Boost_INCLUDE_DIRS}")
message("${Boost_LIBRARIES}")

enable_testing()

add_subdirectory(src/dnn)
add_subdirectory(third_party/glog)
add_subdirectory(test)

add_executable(fly_dnn main.cpp)

target_link_libraries(fly_dnn dnn glog::glog ${Boost_LIBRARIES})
