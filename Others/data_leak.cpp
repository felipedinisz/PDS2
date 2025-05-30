#include <iostream>
using namespace std;
void Vazamento1 () {
    int* ptr = new int(5);
    cout << *ptr << endl; 
    delete ptr;
}

void Vazamento2 (int n) {
    int* ptr = new int[5];
    for (int i = 0; i < n; i++) {
        cin >> ptr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " ";
    }

    delete[] ptr;
}

void Vazamento3 () {
    int* ptr = new int(30);
    delete ptr;
    ptr = new int(20);

    delete ptr;
}

int main () {
    Vazamento1();
    Vazamento2(2);
    Vazamento3();
    return 0;
}