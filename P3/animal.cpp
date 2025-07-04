#include <iostream>
#include <list>

class Animal {
    public:
        virtual void Falar() = 0;
        virtual ~Animal() {}
};

class Cachorro : public Animal {
    void Falar() override {
       std::cout << "Au, au!" << std::endl;
    }
};

class Gato : public Animal {
    void Falar() override {
        std::cout << "Miau!" << std::endl;
    }
};

int main () {
    std::list<Animal*> lista;

    for(int i=0; i<5;i++) {
        if (i % 2 == 0)
            lista.push_back(new Cachorro());
        else
            lista.push_back(new Gato());
    }

    for (auto a: lista) {
        a->Falar();
    }

    for (auto a: lista) {
        delete a;
    }

    
    
    return 0;
}