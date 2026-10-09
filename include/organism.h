#ifndef ORGANISM_H
#define ORGANISM_H

typedef struct {
    float energy;
} Organism;

void organism_init(Organism *organism, float energy);

#endif
