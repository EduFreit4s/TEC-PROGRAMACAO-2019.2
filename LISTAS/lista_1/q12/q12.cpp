#include <iostream>

using namespace std;
int contador = 0; //usado para informar a quantidade de pares

int contadorPares(int tam, int vetor[]){
  for(int i = 0; i < tam; i++){
    if(vetor[i]%2 == 0 && vetor[i] >= 2){ //0 não eh par
      contador++;
    }
  }
  return contador; //retorna contador
}

int main() {

  int tam; // salva tamanho do vetor
  cout << "Digite o tamanho do vetor: ";
  cin >> tam; //coleta tamanho do vetor
  cout << "Digite os componentes de cada indice: ";
  int vetor[tam]; //prototipo do vetor
  for(int i = 0; i < tam; i++){
    cin >> vetor[i]; //preenche o vetor
  }
  cout << endl << "Quantidade de pares: " << contadorPares(tam, vetor); //chama a funcao que devolve o numero de pares no vetor

  return 0;
}