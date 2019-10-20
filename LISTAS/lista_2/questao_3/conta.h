#include <iostream>
 
using namespace std;

class Conta{

    public:

        Conta();
        Conta(float s);

        float mostraSaldo();
        void fazerSaque(float s);
        void fazerDeposito(float dep);

    protected:

        float saldo;  

};