# Introduction to Neural Networks: A Beginner's Guide
## What is a Neural Network?
A neural network is a machine-learning process that teaches computers to process data mimicking how the human brain works to recognize patterns and make decisions. Imagine it as a network of tiny units called neurons, which are interconnected and work together to process information. This allows neural networks to be a powerful tool used for pattern recognition, making predictions, and solving complex problems.

## Components of Our Neural Network
### 1. Neurons (Nodes)
Neurons are the basic units of a neural network. They take input, process it, and pass it to the next layer. Each neuron performs a simple calculation on its input to produce an output.
### 2. Layers
Neural networks are made up of layers. There are three main types:
- **Input Layer**: Receives the initial data (like an image or text).
- **Hidden Layers**: Process the data through various neurons. Sometimes networks have multiple hidden layers to learn complex patterns, for the sake of simplicity in this example we have only one hidden layer
- **Output Layer**: Produces the final result (like recognizing an object in an image).

These layers are organized in a specific arrangement known as **topology**. As seen below in the provided code for this neural network project, the topology is defined as having 2 input neurons, 3 hidden neurons in one hidden layer, and 1 output neuron in the output layer.

```cpp
    // Creation of the 'NeuralNetwork' object
    NeuralNetwork n({ 2, 3, 1 });
```


### 3. Weights
Values that adjust the importance of the input data. They determine how much influence a particular input will have on the output, think of these like dials that you can turn up or down depending on how much weight or effect you want on the output based on the input

### 4. Activation Functions
After processing the input, the neuron uses an activation function to decide whether to "fire" (send the output to the next layer). Common activation functions include:
+ **ReLU (Rectified Linear Unit)**: Outputs the input directly if it's positive, otherwise, it outputs zero. It's simple and effective for many tasks.
+ **Sigmoid**: Squeezes the output to be between 0 and 1, which is useful for binary classification tasks.

### 5. Forward Propagation
Forward propagation is the process of sending input data through the layers of the network to get an output. The input is multiplied by the weights, biases are added, and the result is passed through the activation function. This process continues through all layers until the output layer produces the final result.

### 6. Backpropagation
Backpropagation is how the neural network learns. After producing an output, the network compares it to the correct answer and calculates the error. It then works backward, adjusting the weights and biases to reduce this error. This process repeats many times until the network becomes accurate

### 7. Training
Training is the process of teaching the neural network to perform well. We feed it a lot of data, and through forward propagation and backpropagation, it learns to make predictions or classifications. Our project uses synthetic data (artificially created data) to train the network for simplicity's sake.
How Our Project Works
In this project, we built a simple neural network from scratch using C++. The neural network consists of multiple layers of neurons, and it learns to recognize patterns by adjusting weights and biases through training.

Step-by-Step Process:
1. Initialization: We start by creating the network with random weights and biases.
2. Forward Propagation: Input data is passed through the network to generate an output.
3. Error Calculation: The network compares its output to the actual answer and calculates the error.
4. Backpropagation: The network adjusts its weights and biases to minimize the error.
5. Training: This process repeats many times with different input data until the network becomes accurate.
