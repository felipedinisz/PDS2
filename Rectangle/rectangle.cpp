#include "rectangle.hpp"
#include <cmath>

Rectangle::Rectangle(double width, double height) {
    _width = width;
    _height = height;
}

double Rectangle::calcArea() {
    return _width * _height;
}

double Rectangle::calcPerimeter() {
    return 2 * (_width + _height);
}