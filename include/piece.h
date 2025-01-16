#pragma once
#include "ingredient.h"

class piece : public ingredient
{
public:
    piece(std::string name, double quantity);
    ~piece() override = default;

protected:
    std::string measure() const override;
};
