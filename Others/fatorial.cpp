#include <iostream>

int fatorial(int n){
    if  (n > 1) {
        return n * fatorial(n - 1);
    } else {
        return 1;
    }
}


int main() {
    int fat1 = fatorial(5);
    std::cout << fat1 << std::endl;

    return 0;
}