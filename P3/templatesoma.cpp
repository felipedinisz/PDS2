#include <iostream>


template <typename T>
T soma(T a, T b) {
    return a + b;
}


int main () {
    int result_int = soma(4, 5);
    int result_double = soma(2.1, 1.1);

    std::cout << result_double << std::endl;
    std::cout << result_int << std::endl;

    
    return 0;
}