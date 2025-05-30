#include "modularizing.hpp"
#include <iostream>
#include <string>

using namespace std;

void PrintSeparation();

int main() {
    Test t1;

    t1.setAttr1(4.5);
    t1.setAttr2("Hello, World!"); 
    cout << t1.getAttr1() << endl;

    cout << t1.getAttr2() << endl;
    PrintSeparation();
    Test t2(90, "Hello World!", "Alfred");
    cout << t2.getAttr1() << endl;

    cout << t2.getAttr2() << endl;
    PrintSeparation();
    Test* t3 = new Test(7, "Monkey", "Suruga");
    cout << t3->getAttr1() << endl;

    cout << t3->getAttr2() << endl;
    PrintSeparation();

    delete t3;
    return 0;

}

void PrintSeparation() {
    cout << "******************************************" << endl;
}
