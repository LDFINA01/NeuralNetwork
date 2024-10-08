//
// Created by LuisF on 6/27/2024.
//

#include "../include/DataProcessing.h"

// Loading Data
void DataProcessing::ReadCSV(const std::string& filename, std::vector<RowVector*>& data) {
    data.clear();
    std::ifstream file(filename);
    std::string line, word;
    // determine number of columns in file
    getline(file, line, '\n');
    std::stringstream ss(line);
    std::vector<Scalar> parsed_vec;
    while (getline(ss, word, ',')) {
        parsed_vec.push_back(Scalar(std::stof(&word[0])));
    }
    unsigned int cols = parsed_vec.size();
    data.push_back(new RowVector(cols));
    for (unsigned int i = 0; i < cols; i++) {
        data.back()->coeffRef(1, i) = parsed_vec[i];
    }

    // read the file
    if (file.is_open()) {
        while (getline(file, line, '\n')) {
            std::stringstream ss(line);
            data.push_back(new RowVector(1, cols));
            unsigned int i = 0;
            while (getline(ss, word, ',')) {
                data.back()->coeffRef(i) = Scalar(std::stof(&word[0]));
                i++;
            }
        }
    }
}
// Generate Data
void DataProcessing::genData(const std::string& filename) {
    std::ofstream file1(filename + "-in");
    std::ofstream file2(filename + "-out");
    // Use the random device to seed the generator
    std::random_device rd;
    // Use the Mersenne Twister engine for a random number genrator
    std::mt19937 gen(rd());
    // Define the distribution for the random number
    std::uniform_real_distribution<Scalar> dis(0.0, 1.0);
    for (unsigned int r = 0; r < 1000; r++) {
        Scalar x = dis(gen);
        Scalar y = dis(gen);
        file1 << x << ", " << y << std::endl;
        file2 << 2 * x + 10 + y << std::endl;
    }
    file1.close();
    file2.close();
}