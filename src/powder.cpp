#include "powder.h"

powder::powder(std::string name, double quantity)
    : ingredient(name, quantity) {}

std::string powder::measure() const
{
    return "g";
}
