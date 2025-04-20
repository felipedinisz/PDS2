#include <iostream>
#include "person.hpp"

using namespace std;
int main() {

    Person *peter = new Person("Peter", 19);
    cout << peter->IsOverAge() << endl;
    peter->PrintData();

    delete peter;
    return 0;
}