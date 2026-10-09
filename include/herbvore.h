#ifndef HERBVORE_H
#define HERBVORE_H

#include "organism.h"

typedef struct {
    Organism organism;
} Herbvore;

void herbvore_init(Herbvore *herbvore, float energy);

#endif
