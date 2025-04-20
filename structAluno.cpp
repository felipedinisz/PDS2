#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int matricula;

    float calcularNSG() {
        return 0;
    }
};

int main () {
    Aluno aluno;
    aluno.nome = "Jose da silva";
    aluno.matricula = 202410525;

    cout << aluno.nome << endl;
    return 0;
}