#include <iostream>
#include "funcao.h"

using namespace std;

int main(){

    vector <float> numeros;
    float num_temp;

    cout << "Digite qualquer numero ou qualquer letra para sair: ";
    while(cin >> num_temp) numeros.push_back(num_temp);

    cout << "Numeros ordenados: ";
    ordem(numeros);

    cout << "Media: " << media(numeros) << endl;

    cout << "Mediana: " << mediana(numeros) << endl;

    system("pause");
    return 0;

}