cmake_minimum_required(VERSION 3.26)
project(NeuralNetwork)

set(CMAKE_CXX_STANDARD 20)

include_directories(C:/Users/LuisF/CLionProjects/NeuralNetwork/Eigen3)

add_executable(NeuralNetwork main.cpp
        NeuralNetwork.cpp
        NeuralNetwork.h
        DataProcessing.cpp
        DataProcessing.h)
