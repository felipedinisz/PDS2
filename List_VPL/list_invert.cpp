#include <iostream>
#include "list.hpp"

using namespace std;

void List::insertNode(int data) {
  Node* aux = new Node;
  aux->data = data;
  aux->next = nullptr;
  if (head == nullptr) {
    head = aux;
    tail = aux;
  } else {
    tail->next = aux;
    tail = aux;
  }
}

void List::display() {
  Node *aux = head;
  while (aux != nullptr) {
    cout << aux->data << " ";
    aux = aux->next;
  }
  cout << endl;
}

void List::inverte() {
    Node* prev = nullptr;
    tail = head;
    while (head) {
        Node* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
}
