#include <assert.h>
#include <iostream>

long long calcularFatorial (int n) {
    assert(n < 0 && "Não é possível calcular fatoriais de números menores que 0");

    long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    std::cout << "Fatorial de 5 é: " << calcularFatorial(5) << std::endl;


    std::cout << "Tentando calcular o fatorial de -1..." << std::endl;
    calcularFatorial(-1);

    std::cout << "Programa terminado." << std::endl;

    return 0;
}