#include <iostream>

using namespace std;
int soma = 0;

bool somaPares(int tam, int vetor[]){
  for(int i = 0; i < tam; i++){
    soma += vetor[i];
  }

  if(soma == 8){
    return 1;
  }else{
    return 0;
  }
}

int main() {
  
  int tam; //tamanho do vetor

  cout << "Digite o tamanho do vetor: ";
  cin >> tam; // coleta o tamanho

  cout << "Digite os valores de cada indice: ";
  int vetor[tam]; //prototipo do vetor
  
  for(int i = 0; i < tam; i++){
    cin >> vetor[i]; // preenche o vetor prototipo
  }

  if(somaPares(tam, vetor)){ //chama a função e a resposta eh utilizada para imprimir uma palavra
    cout << endl << "true" << endl;
  }else{
    cout << endl << "false" << endl;
  } // se a soma de todos elementos 2 do vetor for diferente de 8, a respota será false
  
  return 0;
}