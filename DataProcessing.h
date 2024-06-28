//
// Created by LuisF on 6/27/2024.
//

#ifndef NEURALNETWORK_DATAPROCESSING_H
#define NEURALNETWORK_DATAPROCESSING_H
#include <Eigen/Eigen>
#include <iostream>
#include <vector>
#include <functional>
#include <fstream>

typedef Eigen::Matrix<float, 1, Eigen::Dynamic, Eigen::RowMajor> RowVector;
typedef float Scalar;

class DataProcessing {
public:
    static void ReadCSV(const std::string& filename, std::vector<RowVector*>& data);
    static void genData(const std::string& filename);
};


#endif //NEURALNETWORK_DATAPROCESSING_H
