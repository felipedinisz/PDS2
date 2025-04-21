#ifndef TREE_H
#define TREE_H

struct NodeT {
    int data;
    NodeT* esq;
    NodeT* dir;
};

struct BST {
    NodeT* root = nullptr;

    void insertNodeHelper(NodeT* root, int data);
    void insertNode(int data);
    NodeT* removeNodeHelper(NodeT* root, int data);
    void removeNode(int data);
    void display();  
};
#endif