// apstraktna bazna klasa - minimum 1 cista virtualna funkcija

#pragma once
#include <string>

class ingredient
{
protected:
    std::string name;
    double quantity;

public:
    ingredient(std::string name, double quantity);
    virtual ~ingredient() = default;
    virtual const std::string &getName() const;
    void display();
    virtual std::string measure() const = 0;
};