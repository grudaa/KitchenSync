#pragma once
#include "ingredient.h"

class powder : public ingredient
{
public:
    powder(std::string name, double quantity);
    ~powder() override = default;

protected:
    std::string measure() const override;
};
