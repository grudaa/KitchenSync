#pragma once
#include <stdexcept>
#include <string>

class kitchen_exception : public std::runtime_error
{
public:
    explicit kitchen_exception(const std::string &msg);
};

void validateChoice(int choice);
void validateQuantity(double quantity);
void validateName(const std::string &name);