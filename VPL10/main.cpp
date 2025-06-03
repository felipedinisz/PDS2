#include "aluno.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main () {
    std::vector<Aluno*> alunos;
    std::string nome;

    while(true) {
        std::getline(std::cin, nome);
        if (nome == "END") break;

        int matricula;
        std::cin >> matricula;

        std::vector<int> notas;
        int nota;
        while(std::cin >> nota && nota != -1){
            notas.push_back(nota);
        }

        std::cin.ignore();


        Aluno* aluno = new Aluno(nome, matricula, notas);
        alunos.push_back(aluno);
    }

     std::sort(alunos.begin(), alunos.end(), [](Aluno* a, Aluno* b) {
        return a->getNome() < b->getNome();
    });

    for (Aluno* a : alunos) {
        std::cout << a->getMatricula() << " " << a->getNome() << " ";
        for (int nota : a->getNotas()) {
            std::cout << nota << " ";
        }
        std::cout << std::endl;

        std::cout.precision(2);
        std::cout << std::fixed;
        std::cout << a->calcMedia() << " " << a->getNotaMaxima() << " " << a->getNotaMinima() << std::endl;
    }

    for (Aluno* a : alunos) {
        delete a;
    }



    return 0;
}