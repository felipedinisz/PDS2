#include <iostream>
#include "rectangle.hpp"


int main() {
    Rectangle* rec = new Rectangle(2.2, 3.3);
    std::cout << "area: " << rec->calcArea() << std::endl;
    std::cout << "perimeter: " << rec->calcPerimeter() << std::endl;

    delete rec;
    return 0;
}