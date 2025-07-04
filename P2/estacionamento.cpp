#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


class Carro {
    private:
        std::string _modelo;
        std::string _placa;
        std::string _cor;
    public:
        Carro(std::string modelo, std::string placa, std::string cor) : _modelo(modelo), _placa(placa), _cor(cor) {}

        // Getters
        std::string GetModelo() const { return this->_modelo; }
        std::string GetPlaca() const { return this->_placa; }
        std::string GetCor() const { return this->_cor; }

        // Setters
        void SetModelo(std::string modelo) { this->_modelo = modelo; }
        void SetPlaca(std::string placa) { this->_placa = placa; }
        void SetCor(std::string cor) { this->_cor = cor; }
};


class Estacionamento {
    private:    
        std::vector<Carro> _carros;

    public:
        Estacionamento(const std::vector<Carro>& carros = {}) : _carros(carros) {}

    void Estacionar(const Carro& carro) {
        _carros.push_back(carro);
    }

    void LiberarVaga() {
        if(!_carros.empty()) {
            _carros.pop_back();
        }
    }

    void Display() const {
        for (const auto& carro : _carros) {
            std::cout << carro.GetModelo() << "\t" << carro.GetPlaca() << "\t" << carro.GetCor() << std::endl;
        }
    }

};



int main () {
    Carro* c1 = new Carro("Gol", "ABC-1234", "Vermelho");
    Carro* c2 = new Carro("Uno", "EFG-5678", "Branco");

    Estacionamento* est = new Estacionamento();
    est->Estacionar(*c1);
    est->Estacionar(*c2);

    est->Display();

    est->LiberarVaga();

    est->Display();


    delete c1;
    delete c2;
    delete est;
    return 0;
}