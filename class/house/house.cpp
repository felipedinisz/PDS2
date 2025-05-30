#include <string>
#include <iostream>

using namespace std;

class House {
    private:
        int _number;
        string _color;
    
    public:
        /*
        House(int number, string color) {
            this->_number = number;
            this->_color = color;
        } */

        House(int number, string color) : _number(number), _color(color) {}

        int getNumber() {
            return this->_number;
        }

        string getColor() {
            return this->_color;
        }

        void setColor(string color){
            this->_color = color;
        }

        void setNumber(int number) {
            this->_number = number;
        }


};

int main() {
    House h1(150 , "Purle");
    cout << h1.getNumber() << endl;
    cout << h1.getColor() << endl;

    House *h2 = new House(150, "Red");

    cout << h2->getNumber() << endl;
    cout << h2->getColor() << endl;

    h2->setNumber(220);
    h2->setColor("Green");

    cout << "Updated: " << h2->getNumber() << endl;
    cout << "Updated: " << h2->getColor() << endl;


    delete h2;
    return 0;

}