#include <iostream>
#include "conta.h"
 
using namespace std;


Conta::Conta(){
    saldo = 0;
}

Conta::Conta(float s){
    if(s >= 0){
        saldo = s;
    }else{
        saldo = 0;
        cout << "Saldo invalido!" << endl;
    }
}


float Conta::mostraSaldo(){
    return saldo;
}


void Conta::fazerSaque(float s){
     if(s > saldo){
        cout << "Saque invalido" << endl;
    }else{
        saldo -= s;
        }
}


void Conta::fazerDeposito(float dep){
    if(dep < 0){
        cout << "Deposito invalido" << endl;
    }else{
        saldo += dep;
    }
}