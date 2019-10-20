#include <iostream>
#include "corrente.h"

using namespace std;

// CONSTRUTORES

Corrente::Corrente(float limite, float saldo, float saque, float deposito){
    setLimite(limite);
    setSaldo(saldo);
    setSaque(saque);
    setDeposito(deposito);
}

Corrente::Corrente(float lim){
    setLimite(lim);
}

Corrente::Corrente(){
    setLimite(0);
}

// MOSTRA SALDO DA CLASS CORRENTE (TEM PRIORIDADE EM RELAÇAO A CLASS PAI)

float Corrente::mostraSaldo(){
    return saldo + limite;
}

// VALIDAÇAO DO LIMITE

void Corrente::setLimite(float lim){
    if(lim >= 0){
        limite = lim;
    }else{
        limite = 0;
    }
}

