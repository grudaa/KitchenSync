#include "pantry.h"
#include "liquid.h"
#include "solid.h"
#include "powder.h"
#include "piece.h"
#include <iostream>

int main()
{
    Pantry myPantry;

    // Test praznog pantryja
    std::cout << "Testing empty pantry:\n";
    myPantry.display();

    // Test dodavanja sastojaka
    std::cout << "\nAdding ingredients:\n";
    myPantry.add();
    myPantry.add();

    // Prikaz trenutnog sadrzaja
    std::cout << "\nDisplaying pantry contents:\n";
    myPantry.display();

    // Test removanja sastojka
    std::cout << "\nRemoving an ingredient:\n";
    myPantry.remove();

    // Prikaz updatanog sadrzaja
    std::cout << "\nDisplaying updated pantry contents:\n";
    myPantry.display();

    return 0;
}