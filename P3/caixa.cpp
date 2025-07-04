#include <iostream>
#include <string>

class Caixa {
    protected:
        int _altura;
        int _largura;
    public:
        Caixa(int altura, int largura) : _altura(altura), _largura(largura) {}

        int getAltura() {
            return this->_altura;
        }

        int getLargura() {
            return this->_largura;
        }

        void setAltura(int altura) {
            this->_altura = altura;
        }

        void setLargura(int largura) {
            this->_largura = largura;
        }

};

class CaixaColorida : Caixa {
    private:
        std::string _cor;

    public:
        CaixaColorida(int altura, int largura, std::string cor) : Caixa(altura, largura), _cor(cor) {}

        std::string getCor() {
            return this->_cor;
        }

        void setCor(std::string cor) {
            this->_cor = cor;
        }
};


int main () {

    Caixa* c = new Caixa(25, 50);

    std::cout << c->getAltura() << std::endl;

    std::cout << c->getLargura() <<std::endl;
    
    delete c;

    return 0;
}