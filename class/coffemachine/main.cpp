#include <iostream>

using namespace std;


class CoffeeMachine{
    public:
        virtual void makeCoffee() {
            cout << "Making regular coffee." << endl;
        }
};

class PremiumCoffeeMachine : public CoffeeMachine {
    public:
    void makeCoffee() override {
        cout << "Making capuccino." << endl;
    }
};


void remoteControl(CoffeeMachine* cm) {
    cm->makeCoffee();
}

int main() {
    CoffeeMachine *cm = new CoffeeMachine();
    PremiumCoffeeMachine *pcm = new PremiumCoffeeMachine();

    remoteControl(cm);
    remoteControl(pcm);

    delete cm;
    delete pcm;

    return 0;
}