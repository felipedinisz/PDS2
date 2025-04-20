#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    

    ifstream arquivo("./palavras.txt");
    if (!arquivo) {
        cerr << "Erro ao abrir arquivo!" << endl;
        return 1;
    }

    int total_palavras;
    arquivo >> total_palavras;
    
    vector<string> palavras(total_palavras);
    for (int i = 0; i < total_palavras; i++) {
        arquivo >> palavras[i];
    }
    arquivo.close();

    
    int indice;
    cin >> indice;
    string chave = palavras[indice - 1];

   
    vector<char> letras_ausentes;
    unordered_set<char> letras_ausentes_unicas;

    bool acertou = false;
    
  
    for (int tentativa = 1; tentativa <= 5; tentativa++) {
        string palpite;
        cin >> palpite;

        
        if (palpite == chave) {
            cout << "GANHOU!" << endl;
            acertou = true;
            break;
        }

        string dica;
        for (int pos = 0; pos < 5; pos++) {
            char letra = palpite[pos];
            
            if (letra == chave[pos]) {
                dica += toupper(letra); 
            } 
            else if (chave.find(letra) != string::npos) {
                dica += tolower(letra); 
            } 
            else {
                dica += '*'; 
                
                if (!letras_ausentes_unicas.count(letra)) {
                    letras_ausentes_unicas.insert(letra);
                    letras_ausentes.push_back(letra);
                }
            }
        }

        
        string ausentes_str(letras_ausentes.begin(), letras_ausentes.end());
        cout << dica << " (" << ausentes_str << ")" << endl;
    }

    
    if (!acertou) {
        cout << "PERDEU! " << chave << endl;
    }

    return 0;
}