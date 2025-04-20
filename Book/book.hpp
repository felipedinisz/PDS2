#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

struct Book
{
    string _title;
    string _author;
    int _numPages;

    Book(string _title, string _author, int _numPages);
    void PrintInfo();



};


#endif