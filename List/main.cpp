#include "list.hpp"

int main() {
    List lista;

    lista.insertNode(111);
    lista.insertNode(222);

    lista.removeNode(222);
    lista.display();
    return 0;
}