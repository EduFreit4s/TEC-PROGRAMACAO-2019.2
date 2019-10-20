#include "conta.h"
#include <iostream>

using namespace std;

Conta::Conta(){ // <- CONSTRUTOR
}

void  Conta::fazerDeposito(){
    float dep;
    cout << "Digite o valor do deposito: ";
    cin >> dep;
    setDeposito(dep);
}

void  Conta::fazerSaque(){
    float saq;
    cout << "Digite o valor do saque: ";
    cin >> saq;
    setSaque(saq);
  
}

void Conta::setDeposito(float dep){
    if(dep < 0){
        saldo += dep;
    }else{
        saldo += dep;
    }
}

void Conta::setSaque(float saq){
    if(saq > saldo){
        cout << "Saldo Insuficiente!" << endl;
    }else{
        saldo -= saq;
    }
}

float Conta::mostraSaldo(){
  return saldo;
}

void Conta::setSaldo(float s){ // <- VALIDACAO
  if(s < 0){
    saldo = 0;
  }else{
    saldo = s;
  }
}

//FIM
