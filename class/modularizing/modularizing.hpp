#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <string>

using namespace std;

class Test{
    private:
        double _attr1;
        string _attr2;
        string _name;

    public:
        Test();
        Test(double attr, string attr2, string name);

        double getAttr1();
        string getAttr2();
        void setAttr1(double attr1);
        void setAttr2(string attr2);


        ~Test();
};

#endif