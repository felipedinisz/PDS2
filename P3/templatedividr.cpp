#include <iostream>

template <typename T>
T dividir(T a, T b) {

    if (b == 0) {
        throw std::runtime_error("Erro em tempo de execucao: tentou dividir por 0"); 
    }

    return a / b;
}

int main () {

    try {
        int resultint = dividir(5, 0);
        std::cout << resultint << std::endl;
    }  catch (const std::runtime_error& e) {
        std::cerr << "Uma excecao foi capturada: " << e.what() << std::endl;

    }

    try {
        double resultdouble = dividir(5.2, 0.0);
        std::cout << resultdouble << std::endl;
    }  catch (const std::runtime_error& e) {
        std::cerr << "Uma excecao foi capturada: " << e.what() << std::endl;
    }


}

