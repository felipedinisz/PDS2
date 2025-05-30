#include "modularizing.hpp"


Test::Test() : Test(0.0, "", "Lorem") {}

Test::Test(double attr1, string attr2, string name) : _attr1(attr1), _attr2(attr2), _name(name){}

double Test::getAttr1() {
    return _attr1;
}

string Test::getAttr2() {
    return _attr2;
}

void Test::setAttr1(double attr1) {
    this->_attr1 = attr1;
}

void Test::setAttr2(string attr2) {
    this->_attr2 = attr2;
}

Test::~Test(){
    cout << this->_name << " said: Bye-Bye, World!" << endl;
}