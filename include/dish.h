// tu radit jela koja svoje sastojke spremaju u mapu koja se sastoji od id sastojka iz pantry i kolicine tog sastojka u jelu

// metode za dodavanje i brisanje sastojaka iz jela, metoda za ispis recepta

#pragma once
#include <string>
#include <map>
#include "ingredient.h"
#include "pantry.h"
#define DEFAULT_DISH_NAME "Unnamed dish"

class Dish
{
private:
    std::string name;
    std::map<ingredient *, double> recipe;
    Pantry &pantry;

public:
    Dish(Pantry &p, const std::string &name = DEFAULT_DISH_NAME);
    ~Dish();

    void addIngredient(ingredient *ing, double quantity);
    void removeIngredient(const std::string &ingName);
    void display() const;
    const std::string &getName() const;
    void setName(const std::string &);
};