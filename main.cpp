#include <iostream>
#include <Eigen/Eigen>
#include "NeuralNetwork.h"
#include "DataProcessing.h"



typedef  std::vector<RowVector*> data;

int main() {

    NeuralNetwork n({ 2, 3, 1 });
    data in_dat, out_dat;
    DataProcessing::genData("test");
    DataProcessing::ReadCSV("test-in", in_dat);
    DataProcessing::ReadCSV("test-out", out_dat);
    n.train(in_dat, out_dat);
    return 0;

}
