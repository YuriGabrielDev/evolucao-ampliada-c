#ifndef NEURAL_NETWORK_H
#define NEURAL_NETWORK_H

typedef struct {
    unsigned int input_count;
    unsigned int output_count;
} NeuralNetwork;

void neural_network_init(
    NeuralNetwork *network,
    unsigned int input_count,
    unsigned int output_count
);

#endif
