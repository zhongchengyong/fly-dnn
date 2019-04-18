cmake_minimum_required(VERSION 3.12)
project(dnn)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. DNN)
aux_source_directory(./layers LAYERS)
aux_source_directory(./params, PARAMS)

add_library(dnn SHARED ${DNN} ${LAYERS} ${PARAMS} utility/logger.cpp utility/logger.h)