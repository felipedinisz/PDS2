#include <iostream>
#include <string>

using namespace std;

int main () {
    string nome_completo;

    cout << "Digite seu nome completo: ";
    getline(cin, nome_completo);

    cout << "Ola, " << nome_completo << endl;

    return 0;
}