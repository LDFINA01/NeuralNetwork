cmake_minimum_required(VERSION 3.26)
project(NeuralNetwork)

set(CMAKE_CXX_STANDARD 20)


set(EIGEN3_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/Eigen3")
include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(NeuralNetwork
        src/main.cpp
        src/NeuralNetwork.cpp
        src/DataProcessing.cpp
        include/NeuralNetwork.h
        include/DataProcessing.h)

