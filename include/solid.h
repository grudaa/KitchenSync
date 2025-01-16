#pragma once
#include "ingredient.h"

class solid : public ingredient
{
public:
    solid(std::string name, double quantity);
    ~solid() override = default;

protected:
    std::string measure() const override;
};
