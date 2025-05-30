#include <iostream>

using namespace std;

class Motor {
    public:
        void injetar_gasolina() {
            cout << "Injetando gasolina." << endl;
        }
};

class Turbina {
    public:
        void ligar_turbo() {
            cout << "Ligando turbo." << endl;
        }
};

class Carro {
    private:
        int _num_portas;
        Motor _motor;

    public:
        Carro(int num_portas) : _num_portas(num_portas) {}

        void acelerar() {
            this->acionar_motor();
        }

        void frear() {
            this->acionar_discos_freio();
        }

        int get_num_portas() {
            return this->_num_portas;
        }


        private:
            void acionar_motor() {
                this->_motor.injetar_gasolina();
            }
            
            void acionar_discos_freio() {
                cout << "Acionando discos de freio." << endl;
            }
};

class BatMovel : public Carro {
    private:
        Turbina _turbina;

    public:
        BatMovel() : Carro(1) {}
        
        void acelerar_turbo() {
            this->acelerar();
            this->acionar_turbina();
        }

        void frear() {
            cout << "Acionando freios especiais." << endl;
        }   
    
        private:
            void acionar_turbina() {
                this->_turbina.ligar_turbo();
            }
};


int main() {
    Carro* ferrari = new Carro(2);
    cout << ferrari->get_num_portas() << endl;
    ferrari->acelerar();
    ferrari->frear();

    Carro* bmw = new Carro(4);
    cout << bmw->get_num_portas() << endl;
    bmw->acelerar();
    bmw->frear();

    BatMovel batmovel;
    cout << batmovel.get_num_portas() << endl;
    batmovel.acelerar();
    batmovel.acelerar_turbo();
    batmovel.frear();

    delete ferrari;
    delete bmw;
    return 0;
}
