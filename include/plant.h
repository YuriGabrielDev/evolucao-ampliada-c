#ifndef PLANT_H
#define PLANT_H

typedef struct {
    float energy;
} Plant;

void plant_init(Plant *plant, float energy);

#endif
