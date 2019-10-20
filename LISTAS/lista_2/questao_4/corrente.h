#include <iostream>
#include "conta.h"

using namespace std;

class Corrente : public Conta{

    public:

        Corrente(float limite, float saldo, float saque, float deposito);
        Corrente();
        Corrente(float limite);

        void setLimite(float l);
        float mostraSaldo();

        float limite;
    
    protected: 

    

};