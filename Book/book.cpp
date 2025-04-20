#include "book.hpp"
#include <iostream>
#include <string>

using namespace std;

Book::Book(string title, string author, int numPages){
    this->_title = title;
    this->_author = author;
    this->_numPages = numPages;
}

void Book::PrintInfo(){
    cout << "Title: " << _title << endl;
    cout << "Author: " << _author << endl;
    cout << "Number of pages: " << _numPages << endl;
}