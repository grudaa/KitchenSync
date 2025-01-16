// apstraktna bazna klasa - minimum 1 cista virtualna funkcija
#pragma once
#include <string>

class ingredient
{
protected:
    std::string name;
    double quantity;
    virtual std::string measure() const = 0;

public:
    ingredient(std::string name, double quantity);
    virtual ~ingredient() = default;
    void display();
};