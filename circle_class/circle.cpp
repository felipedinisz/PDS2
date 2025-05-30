#include "circle.hpp"

float Circle::calcular_volume() {
    return (4/3) * M_PI * pow(this->raio, 3);
}

float Circle::calcular_densidade() {
    return this->massa / this-> calcular_volume();
}