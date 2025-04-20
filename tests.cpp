#include <iostream>
#include <limits>

using namespace std;

int main() {
    int numTests;
    while (true) {
        cout << "Coloque a quantidade de testes desejados: ";
        cin >> numTests;
    
        if (cin && numTests >= 0) break;
    
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Entrada invalida. Tente novamente." << endl;
    }
    
    int* ptr = new int[numTests];

    if(ptr == nullptr) {
        cout << "Erro ao alocar memoria";
        exit(1);
    }

    for (int i = 0; i < numTests; i++) {
        cout << "Entre o teste #" << i + 1 << ": ";
        cin >> ptr[i];
    }

    for (int i = 0; i < numTests; i++) {
        cout << "Teste #" << i + 1 << ": " << ptr[i] << endl;
    }

    delete[] ptr;

    return 0;
}