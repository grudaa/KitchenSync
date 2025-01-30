#pragma once
#include "exception.h"

kitchen_exception::kitchen_exception(const std::string &msg)
    : std::runtime_error(msg) {}

void validateChoice(int choice)
{
    if (choice < 1 || choice > 4)
    {
        throw kitchen_exception("Invalid choice: must be between 1 and 4");
    }
}

void validateQuantity(double quantity)
{
    if (quantity <= 0)
    {
        throw kitchen_exception("Invalid quantity: must be positive");
    }
}

void validateName(const std::string &name)
{
    if (name.empty())
    {
        throw kitchen_exception("Name cannot be empty");
    }
}