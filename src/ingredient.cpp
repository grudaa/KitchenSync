#include <iostream>
#include <string>
#include "ingredient.h"

ingredient::ingredient(std::string name, double quantity)
    : name(name), quantity(quantity)
{
}

void ingredient::display()
{
    std::cout << name << ": " << quantity << " " << measure() << std::endl;
}

const std::string &ingredient::getName() const
{
    return name;
}