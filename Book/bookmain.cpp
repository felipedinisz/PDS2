#include <iostream>
#include "book.hpp"

using namespace std;

int main() {

    Book *book1 = new Book("Lord of Ring", "Tolkien", 1500);

    book1->PrintInfo();

    delete book1;
    return 0;
}