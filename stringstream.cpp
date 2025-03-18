#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main () {
    string frase, palavra;

    getline(cin, frase);
    stringstream s(frase);

    while (s >> palavra) {
        cout << palavra << endl;

    }

    return 0;
}