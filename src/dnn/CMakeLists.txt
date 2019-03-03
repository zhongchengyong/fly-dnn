cmake_minimum_required(VERSION 3.12)
project(dnn)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. DNN)

add_library(dnn SHARED ${DNN})