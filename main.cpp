#include "dish.h"
#include "pantry.h"
#include <iostream>

int main()
{
    // pantry
    Pantry myPantry;
    myPantry.add(); // dodat "voda" za testing
    myPantry.add(); // dodat "brasno" za testing
    myPantry.add(); // dodat "test" za testing brisanja

    // Display pantrya
    std::cout << "\nCurrent Pantry: \n";
    myPantry.display();

    // Brisanje ingredienta
    std::cout << "\nTesting Ingredient Removal: \n";
    myPantry.remove(); // brisanje "test" za testing

    // Display updatanog pantrya
    std::cout << "\nUpdated Pantry: \n";
    myPantry.display();

    // Dish stvaranje
    std::cout << "\nTesting Dish Creation: \n";
    Dish carbonara(myPantry, "Pasta Carbonara");

    // Dodavanje ingredienta
    std::cout << "\nTesting Adding Ingredients: \n";

    carbonara.addIngredient(myPantry.findIngredient("voda"), 0.5);
    carbonara.addIngredient(myPantry.findIngredient("brasno"), 200);

    // Display recepta
    std::cout << "\nCurrent Recipe: \n";
    carbonara.display();

    // Brisanje ingredienta
    std::cout << "\nTesting ingredient removal: \n";
    carbonara.removeIngredient("voda");

    // Display updatanog recepta
    std::cout << "\n Updated Recipe: \n";
    carbonara.display();

    return 0;
}