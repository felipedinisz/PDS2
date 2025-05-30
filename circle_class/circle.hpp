#ifndef ESFERA_H
#define ESFERA_H
#include <cmath>
#include <string>

class Circle{
    public:
    float massa;
    float raio;
    std::string cor;

    float calcular_volume();
    float calcular_densidade();
};

#endif