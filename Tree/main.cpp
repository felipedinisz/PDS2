#include "tree.hpp"
#include <iostream>

int main() {
    BST arvore;

    arvore.insertNode(50);
    arvore.insertNode(30);
    arvore.insertNode(70);
    arvore.insertNode(20);
    arvore.insertNode(40);
    arvore.insertNode(60);
    arvore.insertNode(80);

    std::cout << "Arvore em ordem: ";
    arvore.display();

    arvore.removeNode(20);
    arvore.removeNode(30);
    arvore.removeNode(50);

    std::cout << "Arvore apos remocoes: ";
    arvore.display();

    return 0;
}
