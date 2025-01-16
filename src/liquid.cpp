#include "liquid.h"

liquid::liquid(std::string name, double quantity)
    : ingredient(name, quantity) {}

std::string liquid::measure() const
{
    return "L"; 
}
