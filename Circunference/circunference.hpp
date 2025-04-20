#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

#include <cmath>
struct Circunferencia
{
    double _x, _y;
    double _raio;

    Circunferencia(double _x, double _y, double _raio);
    double CalcularArea();
};

#endif

