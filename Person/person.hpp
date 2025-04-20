#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

struct Person{
    string _name;
    int _age;

    Person(string name, int age);

    bool IsOverAge();
    void PrintData();
};


#endif