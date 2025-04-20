#include <iostream>
#include <cmath>

int main () {

    for (int i = 1; i <= 100; i++) {
       // float exp = float(3 * i) / float(1 + 6 * i);
       // float exp = float(2) + float(pow(-1, i) / i);
       float exp = float(1000*pow(1.06, i));

        std::cout <<"i: " << i << "          " << exp << std::endl;
    }
    return 0;
}