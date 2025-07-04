#include <iostream>

template <typename T>


T multiplicar(T a, T b) {
    return a * b;
}

int main () {
    int resultado_int = multiplicar(5, 10);
    double resultado_double = multiplicar(2.1, 2.3);
    std::cout << resultado_double << std::endl;
    std::cout << resultado_int << std::endl;



    return 0;
}