#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

void pesquisa(vector<int>, int);

int main()
{
    vector<int> numeros, tentativas;
    int input;

    clock_t tempo[2]; // armazena o tempo
    tempo[0] = clock(); // começa conta o tempo

    cout << "digite a quantidade de numeros: ";
    cin >> input;

    for(int i = 0, x = input; i < x; i++){
        cout << "digite o " << "(" << i+1 << ") numero: ";
        cin >> input;
        numeros.push_back(input);
    }

    cout << endl << "digite a quantidade de tentativas: ";
    cin >> input;

    for(int i = 0, x = input; i < x; i++){
        cout << "tentativa (" << i+1 << "): ";
        cin >> input;
        pesquisa(numeros, input);    
    }

    tempo[1] = clock(); // para de contar o tempo
    double Tempo = (tempo[1] - tempo[0]) * 1000.0 / CLOCKS_PER_SEC; // faz os calculos em milisegundos
    cout << endl << endl << "Tempo gasto em ms: " << Tempo; // printa o tempo

    return 0;
}

void pesquisa(vector<int> numeros, int tentativa) {
    
    bool ok = false;
    int pos, temp = tentativa;
    
    for(int i = 0; i < numeros.size(); i++){
        
        if(tentativa == numeros[i]){
            ok = true;
            pos = i; 
            break;
        }

        if(numeros[i] > temp){
            temp = numeros[i];
            pos = i;
        }
    }

    (ok) ? cout << "Yes " << pos+1 << endl : cout << "No " << pos+1 << endl;
}