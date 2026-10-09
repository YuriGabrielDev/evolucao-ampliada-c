#include "neural_network.h"

void neural_network_init(
    NeuralNetwork *network,
    unsigned int input_count,
    unsigned int output_count
)
{
    network->input_count = input_count;
    network->output_count = output_count;
}
