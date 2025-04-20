#include <fstream>
#include <iostream>
#include <string>

using namespace std; 


int main () {

    ifstream in("input.txt", fstream::in);
    if (!in.is_open()) {
        return 1;
    }

    ofstream out("output.txt", fstream::out);
    if (!out.is_open()) {
        return 1;
    }

    string line;
    while (getline(in, line)) {
        out << "[" << line << "]" << endl;
    }

    in.close();
    out.close();

    return 0;

}