#include <iostream>
#include "corrente.h"

using namespace std;

int main(){

    Corrente eu(1000);

    cout << "Saldo: R$ " << eu.mostraSaldo() << endl;
   
    return 0;
    system("pause");
}