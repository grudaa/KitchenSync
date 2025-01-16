#pragma once
#include "ingredient.h"

class liquid : public ingredient
{
public:
    liquid(std::string name, double quantity);
    ~liquid() override = default;

protected:
    // Implements the pure virtual function from base class
    std::string measure() const override;
};
