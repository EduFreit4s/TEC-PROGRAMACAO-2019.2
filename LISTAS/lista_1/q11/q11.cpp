#include <iostream>

using namespace std;

void quadrado(float &valor){  // função quadrado
  valor *= valor; //eleva o numero ao quadrado
}

int main(){
  
    float numero; //armazena numero digitado

    cout << "Digite um numero: "; //informa ao usuario o que ele deve fazer
    cin >> numero; // joga o valor digitado na variavel numero
    quadrado(numero); // função eh chamada
    cout << "Qualquer numero negativo ao quadrado fica positivo: " << numero << endl;
    // prova que função funciona

    return 0; 
}