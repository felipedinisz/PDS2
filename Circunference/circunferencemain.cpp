#include <iostream>
#include "circunference.hpp"

int main () {
    Circunferencia* circ = new Circunferencia(0, 0, 10);
    std::cout << circ->CalcularArea() << std::endl;

    delete circ;

    return 0;
}