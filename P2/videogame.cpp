#include <iostream>
#include <string>

class Game{ 
    private:
        std::string _nome;
        float _valor, _custoPorHora;
        int _horas;

        void AtualizarCustoPorHora() {
            if (_horas > 0) {
                _custoPorHora = _valor / _horas;
            } else {
                _custoPorHora = 0.0f;
            }
    }

    public:
        Game(const std::string nome, float valor) : _nome(nome), _valor(valor), _horas(0), _custoPorHora(0.0f) {}

       
        void Print() const {
            std::cout << "Nome: " << _nome << std::endl;
            std::cout << "Valor: R$" << _valor << std::endl;
            std::cout << "Horas jogadas: " << _horas << std::endl;
            std::cout << "Custo por hora: R$" << _custoPorHora << std::endl;
        }

        void Play(int horasJogadas) {
            if (horasJogadas > 0) {
                _horas += horasJogadas;
                AtualizarCustoPorHora();
            }
        }

        void UpdatePrice(float novo_valor) {
            if (novo_valor >= 0.0f) {
                _valor = novo_valor;
                AtualizarCustoPorHora();
            }
        }
};


int main () {
    Game cs("CS", 75.00);
    cs.Print();

    cs.Play(4);
    cs.Play(6);
    cs.Print();

    cs.UpdatePrice(50.00);
    cs.Play(10);
    cs.Print();

    return 0;
}
