#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "organism.h"

typedef struct {
    Organism organism;
} Carnivore;

void carnivore_init(Carnivore *carnivore, float energy);

#endif
