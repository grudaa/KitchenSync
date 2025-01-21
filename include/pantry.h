// tu spremat sve sastojke i kolkiko ih ima u vektor, onda u dish samo referencirat na id od vektora

// metode add i remove za dodavanje i brisanje sastojaka iz vektora i metoda za ispis svih sastojaka

#pragma once
#include <vector>
#include "ingredient.h"

class Pantry
{
private:
    std::vector<ingredient *> ingredients;

public:
    Pantry();
    ~Pantry();

    void add();
    void remove();
    void display();
};