#include <iostream>
#include "liquid.h"
#include "solid.h"
#include "powder.h"
#include "piece.h"

int main()
{
    std::cout << "=== Liquid Ingredients ===\n";
    liquid water("Water", 1500);
    liquid milk("Milk", 500);
    liquid oil("Oil", 250);
    water.display();
    milk.display();
    oil.display();

    std::cout << "\n===  Solid Ingredients ===\n";
    solid meat("Meat", 500);
    solid cheese("Cheese", 200);
    meat.display();
    cheese.display();

    std::cout << "\n===  Powder Ingredients ===\n";
    powder flour("Flour", 300);
    powder sugar("Sugar", 100);
    flour.display();
    sugar.display();

    std::cout << "\n===  Piece Ingredients ===\n";
    piece eggs("Eggs", 6);
    piece tomatoes("Tomatoes", 4);
    eggs.display();
    tomatoes.display();

    return 0;
}