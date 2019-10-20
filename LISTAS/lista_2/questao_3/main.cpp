#include <iostream>
#include "conta.h"

using namespace std;

int main(){

    Conta eu(1000);
    Conta tu(2000);
    
    cout << "Eu, saldo: " << eu.mostraSaldo() << endl;
    eu.fazerSaque(500);
    eu.fazerDeposito(100);
    cout << "Eu, saldo final: " << eu.mostraSaldo() << endl;

    cout << "Tu, saldo: " << tu.mostraSaldo() << endl;
    tu.fazerSaque(500);
    tu.fazerDeposito(100);
    cout << "Tu, saldo final: " << tu.mostraSaldo() << endl;

    return 0;
    system("pause");
}