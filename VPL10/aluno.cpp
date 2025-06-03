#include "aluno.hpp"


// Constructor
Aluno::Aluno(std::string nome, int matricula, std::vector<int> notas) 
: _nome(nome), _matricula(matricula), _notas(notas){}


// Setters
void Aluno::setNome(std::string nome) {
    this->_nome = nome;
}

void Aluno::setMatricula(int matricula) {
    this->_matricula = matricula;
}

void Aluno::setNotas(std::vector<int> notas) {
    this->_notas = notas;
}

// Getters 
std::string Aluno::getNome() {
    return _nome;
}

int Aluno::getMatricula() {
    return _matricula;
}

std::vector<int> Aluno::getNotas() {
    return _notas;
}

// Exigidas

double Aluno::calcMedia(){
    double somatorio = 0.0;
    for (auto nota : _notas) {
        somatorio += nota;
    }

    return somatorio / _notas.size();
}

int Aluno::getNotaMaxima() {
    int maiorNota = _notas[0];
    for (auto nota : _notas) {
        if (nota > maiorNota) {
            maiorNota = nota;
        }
    }

    return maiorNota;
}

int Aluno::getNotaMinima() {
    int menorNota = _notas[0];
    for (auto nota : _notas) {
        if (nota < menorNota) {
            menorNota = nota;
        }
    }

    return menorNota;
}