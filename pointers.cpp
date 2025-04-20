#include <iostream>

using namespace std;

int main() {
    int n, i;
    int *ptr = nullptr;

    cout << "Digite quantos numeros voce quer escrever: ";
    cin >> i;
    ptr = new int[i];

    if (ptr == nullptr) {
        cout << "Erro ao alocar memoria." << endl;
        exit(1);
    }

    for (n = 0; n < i; n++) {
        cout << "Digite um numero: ";
        cin >> ptr[n];
    }

    cout << "Voce escreveu: ";

    for (n = 0; n < i; n++) {
        if (n == i - 1) {
            cout << ptr[n] << "."; 
        } else {
            cout << ptr[n] << ", "; 
        }
  
    }

    delete[] ptr;
    return 0;
}