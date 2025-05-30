#include <iostream>
#include <cmath>

using namespace std;

struct Ponto3D {
    float x;
    float y;
    float z;

    float calcularDistancia(Ponto3D* p2) {
        float dx = p2 -> x - this -> x;
        float dy = p2 -> y - this -> y;
        float dz = p2 -> z - this -> z;

        return sqrt(dx*dx + dy*dy + dz*dz);
    }
};

int main () {

    Ponto3D* p1 = new Ponto3D;
    p1 -> x = 0;
    p1 -> y = 0;
    p1 -> z = 0;

    Ponto3D* p2 = new Ponto3D;
    p2 -> x = 5;
    p2 -> y = 5;
    p2 -> z = 5;

    cout << p1 -> calcularDistancia(p2) << endl;

    delete p1;
    delete p2;

    return 0;
}

