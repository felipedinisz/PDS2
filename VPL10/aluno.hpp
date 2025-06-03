#ifndef ALUNO_H
#define ALUNO_H
#include <string>
#include <vector>


class Aluno{
    private:
        std::string _nome;
        int _matricula;
        std::vector<int> _notas;

    public:
        //constructor
        Aluno(std::string nome, int matricula, std::vector<int> notas);

        //setters
        void setNome(std::string nome);
        void setMatricula(int matricula);
        void setNotas(std::vector<int> notas);

        // getters
        std::string getNome();
        int getMatricula();
        std::vector<int> getNotas();


        // exigidas
        double calcMedia();
        int getNotaMaxima();
        int getNotaMinima();

};


#endif