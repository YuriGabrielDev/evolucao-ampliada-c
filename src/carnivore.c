#include "carnivore.h"

void carnivore_init(Carnivore *carnivore, float energy)
{
    organism_init(&carnivore->organism, energy);
}
