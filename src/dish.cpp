#include "dish.h"
#include "ingredient.h"
#include <iostream>
#include <algorithm>

Dish::Dish(Pantry &p, const std::string &dishName)
    : name(dishName), pantry(p)
{
}

Dish::~Dish()
{
    recipe.clear();
}

void Dish::addIngredient(ingredient *ing, double quantity)
{
    if (!ing)
    {
        std::cout << "----Ingredient not found in pantry!----\n";
        return;
    }

    recipe[ing] = quantity;
    std::cout << "Added " << quantity << " " << ing->measure()
              << " of " << ing->getName() << " to " << name << "\n";
}

void Dish::removeIngredient(const std::string &ingName)
{
    for (auto it = recipe.begin(); it != recipe.end(); ++it)
    {
        if (it->first->getName() == ingName)
        {
            recipe.erase(it);
            std::cout << ingName << " removed from " << name << "\n";
            return;
        }
    }
    std::cout << ingName << " not found in " << name << "\n";
}

void Dish::display() const
{
    std::cout << "\n-------- Recipe for " << name << " --------\n";
    if (recipe.empty())
    {
        std::cout << "No ingredients added yet.\n";
        return;
    }

    for (const auto &[ing, qty] : recipe)
    {
        std::cout << ing->getName() << ": " << qty << " " << ing->measure() << "\n";
    }
    std::cout << "--------------------------------\n\n";
}

const std::string &Dish::getName() const
{
    return name;
}

void Dish::setName(const std::string &newName)
{
    name = newName;
}