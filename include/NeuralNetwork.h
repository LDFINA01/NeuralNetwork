//
// Created by LuisF on 6/24/2024.
//

#ifndef NEURALNETWORK_NEURALNETWORK_H
#define NEURALNETWORK_NEURALNETWORK_H


// NeuralNetwork.hpp
#include <Eigen/Eigen>
#include <iostream>
#include <vector>
#include <functional>
#include <fstream>

// Use typedefs for future ease for changing data types like : float to double
typedef float Scalar;
typedef Eigen::MatrixXf Matrix;
typedef Eigen::RowVectorXf RowVector;
typedef Eigen::VectorXf ColVector;

// neural network implementation class
class NeuralNetwork {
public:
    // constructor
    NeuralNetwork(std::vector<unsigned int> topology, Scalar learningRate = Scalar(0.005));

    // function for forward propagation of data
    void propagateForward(RowVector& input);

    // function for backward propagation of errors made by neurons
    void propagateBackward(RowVector& output);

    // function to calculate errors made by neurons in each layer
    void calcErrors(RowVector& output);

    // function to update the weights of connections
    void updateWeights();

    // function to train the neural network give an array of data points
    void train(std::vector<RowVector*> input_data, std::vector<RowVector*> output_data );

    // storage objects for working of neural network

    std::vector<RowVector*> neuronLayers; // stores the different layers of out network
    std::vector<RowVector*> cacheLayers; // stores the unactivated (activation fn not yet applied) values of layers
    std::vector<RowVector*> deltas; // stores the error contribution of each neurons
    std::vector<Matrix*> weights; // the connection weights itself
    Scalar learningRate;

private:
    std::vector<unsigned int> topology; // network topology

};




#endif //NEURALNETWORK_NEURALNETWORK_H
