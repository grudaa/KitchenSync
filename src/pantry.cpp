#include "pantry.h"
#include "liquid.h"
#include "solid.h"
#include "powder.h"
#include "piece.h"
#include "exception.h"
#include <iostream>
#include <algorithm>

Pantry::Pantry() : ingredients() {}

Pantry::~Pantry()
{
    for (auto *ing : ingredients)
    {
        delete ing;
    }
    ingredients.clear();
}

void Pantry::add()
{
    try
    {
        std::cout << "\nSelect ingredient type to add:\n\n";
        std::cout << "1. Liquid - L\n2. Solid - KG\n3. Powder - g\n4. Piece\n\n";

        int choice;
        std::cin >> choice;
        validateChoice(choice);

        std::string name;
        std::cout << "\nEnter name: ";
        std::cin >> name;
        validateName(name);

        double quantity;
        std::cout << "\nEnter quantity: ";
        std::cin >> quantity;
        validateQuantity(quantity);

        ingredient *ing = nullptr;
        switch (choice)
        {
        case 1:
            ing = new liquid(name, quantity);
            break;
        case 2:
            ing = new solid(name, quantity);
            break;
        case 3:
            ing = new powder(name, quantity);
            break;
        case 4:
            ing = new piece(name, quantity);
            break;
        }

        if (ing)
        {
            ingredients.push_back(ing);
        }
    }
    catch (const kitchen_exception &e)
    {
        std::cout << "Error: " << e.what() << "\n";
        return;
    }
}

void Pantry::remove()
{
    if (ingredients.empty())
    {
        std::cout << "Pantry is empty.\n";
        return;
    }

    std::string name;
    std::cout << "Enter ingredient name to remove: ";
    std::cin >> name;

    auto it = std::find_if(ingredients.begin(), ingredients.end(),
                           [&name](const ingredient *ing)
                           { return ing->getName() == name; });

    if (it != ingredients.end())
    {
        delete *it;
        ingredients.erase(it);
        std::cout << name << " removed from pantry.\n";
    }
    else
    {
        std::cout << name << " not found in pantry.\n";
    }
}

void Pantry::display()
{
    std::cout << "\n-------- Pantry Contents --------\n";
    if (ingredients.empty())
    {
        std::cout << "Pantry is empty.\n";
        return;
    }

    for (auto *ing : ingredients)
    {
        if (!ing)
        {
            std::cout << "Warning: Invalid ingredient found\n";
            continue;
        }
        ing->display();
    }
    std::cout << "----------------------------\n\n";
}

ingredient *Pantry::findIngredient(const std::string &name)
{
    auto it = std::find_if(ingredients.begin(), ingredients.end(),
                           [&name](const ingredient *ing)
                           { return ing->getName() == name; });

    return (it != ingredients.end()) ? *it : nullptr;
}