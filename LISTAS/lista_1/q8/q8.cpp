#include <iostream>
using namespace std;

float somaDeFloats(float a, float b){
  if(a != b){
    return a+b;
  }else{
    return 2*(a+b);
  }
}

int main() {

  float a, b; //armazena a e b

  cout << "digite dois numeros: "; //pede para usuario digitar os numeros
  cin >> a >> b; // coleta a e b
  cout << "Resposta: " << somaDeFloats(a, b) << endl; //resposta
  return 0;
}