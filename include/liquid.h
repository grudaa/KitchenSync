#pragma once
#include "ingredient.h"

class liquid : public ingredient
{
public:
    liquid(std::string name, double quantity);
    ~liquid() override = default;

protected:
    std::string measure() const override;
};
