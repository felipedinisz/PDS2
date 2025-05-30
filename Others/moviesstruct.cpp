#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct Filmes {
    string titulo;
    int ano;
};

void MostrarFilme(const Filmes* filme);

int main() {
    Filmes* meu = new Filmes;
    Filmes* seu = new Filmes;
    string minhastr;
    meu->titulo = "La Haine";
    meu->ano = 1995;

    cout << "Qual seu filme favorito? " << endl;
    getline(cin, seu->titulo);

    cout << "Qual eh o ano que ele foi lancado? " << endl;
    getline(cin, minhastr);

    stringstream(minhastr) >> seu->ano;

    cout << "Meu filme favorito eh: " << endl;
    MostrarFilme(meu);
    cout << "Seu filme favorito eh: "  << endl;
    MostrarFilme(seu);

    delete meu;
    delete seu;

    return 0;


}

void MostrarFilme(const Filmes* filme) {
    cout << filme->titulo << " (" << filme->ano << ")" << endl;
}