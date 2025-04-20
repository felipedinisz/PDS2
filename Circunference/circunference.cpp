#include "circunference.hpp"

Circunferencia::Circunferencia(double x, double y, double raio) {
    _x = x;
    _y = y;
    _raio = raio;
}

double Circunferencia::CalcularArea() {
    return M_PI * pow(_raio, 2);
}