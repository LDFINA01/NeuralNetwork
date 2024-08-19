## Overview of the Code Structure
This project is organized into several folders and files, each playing a crucial role in the functionality of the neural network.

+ **Eigen3**: Contains the Eigen3 library, a folder that includes the Eigen3 library, a C++ template library designed for linear algebra. This library provides efficient implementations for operations involving matrices and vectors, which are fundamental to neural network computations used throughout this network 

+ **include**: Folder containing the header files, such as dataProcessing.h and NeuralNetwork.h, which define the classes and functions used throughout the project.
+ **src**: Short for *'source'* code, a folder for housing the core implementation files.
    + **Main.cpp**: Contains the main execution code that drives the program.
    + **DataProcessing.cpp**: Implements functions to read and generate data, which is essential for training and testing the neural network model.
    + **NeuralNetwork.cpp**: Contains the implementation of the neural network itself, including all key algorithms such as forward propagation, backpropagation, and weight updates.
+ **CMakeLists.txt**: A CMake configuration file that ensures the code is portable and can be built on different platforms.
+ **LICENSE**: The GNU General Public License (GPL) that outlines how this project can be used and shared.
+ **README.md**: Provides a quick overview of the project, including instructions on how to build and run the neural network.
  
## Explanation of Core Functions
### Functions in the NeuralNetwork.cpp file
**Constructor**
```cpp
 NeuralNetwork(
    std::vector<unsigned int> topology, // Network topology
    Scalar learningRate                // Learning rate for training
) { ... }
```
This function sets up the structure of the neural network. It initializes the layers, caches, errors, and weights based on the network topology (i.e., the number of neurons in each layer). The learning rate, which determines how quickly the network adjusts its weights during training, is also set here.

**Activation Function**
```cpp
Scalar activationFunction(Scalar x)
```
This function applies the hyperbolic tangent function (tanh) to the input value. It transforms the input into a value between -1 and 1, which helps in learning complex patterns.

**Activation Function Derivative**
```cpp
Scalar activationFunctionDerivative(Scalar x)
```
This function computes the derivative of the activation function. It is used during backpropagation to determine how much the weights should be adjusted based on the error.

**Forward Propagation**
```cpp
void propagateForward(
    RowVector& input  // Input data to be processed by the network
) { ... }
```
This function processes the input data through the neural network, applying the activation function at each layer to generate predictions.

**Error Calculation**
```cpp
void calcErrors(
    RowVector& output  // Desired output for comparison
) { ... }
```
This function calculates the errors made by the neurons in each layer, starting from the output layer and moving backward through the hidden layers.

**Weights Update**
```cpp
void updateWeights() { ... }
```
This function updates the weights of the neural network based on the errors calculated. It adjusts the weights to reduce the error in future predictions.

**Backpropagation**
```cpp
void propagateBackward(
    RowVector& output  // Desired output for comparison
) { ... }
```
This function performs backpropagation by first calculating errors and then updating the weights to minimize these errors.

**Training** 
```cpp
void train(
    std::vector<RowVector*> input_data,  // Data used for training the network
    std::vector<RowVector*> output_data  // Expected results for the training data
) { ... }
```
This function trains the neural network using the provided input and output data. It iterates through the data, performing forward and backward propagation to gradually improve the network’s performance.
### Functions in the DataProcessing.cpp file
**Read CSV**
```cpp
void ReadCSV(
    const std::string& filename,  // Path to the CSV file
    std::vector<RowVector*>& data // Vector to store the read data
) { ... }
```

**Generate Data**
```cpp
void genData(
    const std::string& filename  // Base name for the output files
) { ... }
```
