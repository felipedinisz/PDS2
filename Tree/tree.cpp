#include "tree.hpp"
#include <iostream>

NodeT* createNode(int data) {
    NodeT* aux = new NodeT;
    aux->data = data;
    aux->esq = nullptr;
    aux->dir = nullptr;

    return aux;
}

void BST::insertNode(int data) {
    if(root != nullptr) {
        insertNodeHelper(root, data);
    } else {
        root = createNode(data);
    }
}

void BST::insertNodeHelper(NodeT* n, int data) {
    if(data < n->data) {
        if(n->esq == nullptr) {
            n->esq = createNode(data);
        } else {
            insertNodeHelper(n->esq, data);
        }
    } else if (data > n->data) {
        if(n->dir == nullptr) {
            n->dir = createNode(data);
        } else {
            insertNodeHelper(n->dir, data);
        }
    }
}

void inorder(NodeT* n) {
    if(n == nullptr)
    return;

    inorder(n->esq);
    std::cout << n->data << " ";
    inorder(n->dir); 
}

void BST::display() {
    inorder(root);
    std::cout << std::endl;
}

NodeT* findMin(NodeT* root) {
    while (root && root->esq != nullptr)
        root = root->esq;
    return root;
}

NodeT* BST::removeNodeHelper(NodeT* root, int data) {
    if (root == nullptr) return nullptr;

    if (data < root->data) {
        root->esq = removeNodeHelper(root->esq, data);
    } else if (data > root->data) {
        root->dir = removeNodeHelper(root->dir, data);
    } else {
        // Nó encontrado

        if (root->esq == nullptr && root->dir == nullptr) {
            delete root;
            return nullptr;
        }
        else if (root->esq == nullptr) {
            NodeT* temp = root->dir;
            delete root;
            return temp;
        }
        else if (root->dir == nullptr) {
            NodeT* temp = root->esq;
            delete root;
            return temp;
        }
        else {
            NodeT* temp = findMin(root->dir);
            root->data = temp->data;
            root->dir = removeNodeHelper(root->dir, temp->data);
        }
    }

    return root;
}

void BST::removeNode(int data) {
    root = removeNodeHelper(root, data);
}