#include "person.hpp"
#include <iostream>

using namespace std;

Person::Person(string name, int age){
    _name = name;
    _age = age;
}

bool Person::IsOverAge() {
    return _age >= 18;
}

void Person::PrintData() {
    cout << "Name: " << _name << endl;
    cout << "Age: " << to_string(_age) << endl;
}