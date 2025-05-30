#include <iostream>
#include "circle.hpp"

using namespace std;

int main() {
    Circle esf1;
    esf1.massa = 100;
    esf1.raio = 25;
    esf1.cor = "vermelho";
    cout << "Densidade esf1: " << esf1.calcular_densidade() << endl;

    Circle *esf2 = new Circle();
    esf2->massa = 100;
    esf2->raio = 25;
    esf2->cor = "vermelho";
    cout << "Densidade esf2: " << esf2->calcular_densidade() << endl;

    delete esf2;

    return 0;

}