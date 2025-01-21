/* Tu bi jako dobro dosli exepctioni ako se ne unese nesto od trazenih podataka kako je zamisljeno baciti exepction i ponovno traziti unos */
#include "pantry.h"
#include "liquid.h"
#include "solid.h"
#include "powder.h"
#include "piece.h"
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
    std::cout << "\nSelect ingredient type to add:\n\n";
    std::cout << "1. Liquid - L\n2. Solid - KG\n3. Powder - g\n4. Piece\n\n";

    int choice;
    std::cin >> choice;

    std::string name;
    double quantity;

    std::cout << "\nEnter name: ";
    std::cin >> name;
    std::cout << "\nEnter quantity: ";
    std::cin >> quantity;

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
        std::cout << "Ingredient removed.\n";
    }
    else
    {
        std::cout << "Ingredient not found.\n";
    }
}

void Pantry::display()
{
    if (ingredients.empty())
    {
        std::cout << "Pantry is empty.\n";
        return;
    }

    std::cout << "\n=== Pantry Contents ===\n";
    for (auto *ing : ingredients)
    {
        ing->display();
    }
    std::cout << "=====================\n\n";
}