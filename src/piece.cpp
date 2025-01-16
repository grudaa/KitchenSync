#include "piece.h"

piece::piece(std::string name, double quantity)
    : ingredient(name, quantity) {}

std::string piece::measure() const
{
    return "pcs";
}
