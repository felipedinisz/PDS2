#include <iostream>

using namespace std;

int main() {
    int var1;
    int* ptr1 = nullptr;
    int* ptr2 = nullptr;

    var1 = 5;
    ptr1 = &var1;




    cout << var1 << endl; // Valor da variavel através do nome
    cout << ptr1 << endl; // Endereço armazenado no ponteiro

    cout << *ptr1 << endl; // Valor da variavel através do ponteiro

    int var2 = *ptr1;

    cout << var2 << endl; // Var2 recebe valor de var1 através do ponteiro 

    *ptr1 = 7;

    cout << var1 << endl; // Var1 tem o valor alterado 

    int var3 = 50;
    ptr1 = &var3;

    cout << *ptr1 << endl; // Agora ptr1 aponta para var3
    cout << *ptr2 << endl; // O ptr2 é nullptr


    int* ptr3 = new int;
    *ptr3 = 35;
    cout << *ptr3 << endl;

    delete ptr3;
    return 0;
}