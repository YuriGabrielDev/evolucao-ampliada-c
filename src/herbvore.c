#include "herbvore.h"

void herbvore_init(Herbvore *herbvore, float energy)
{
    organism_init(&herbvore->organism, energy);
}
