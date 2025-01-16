#include "solid.h"

solid::solid(std::string name, double quantity)
    : ingredient(name, quantity) {}

std::string solid::measure() const
{
    return "KG";
}
