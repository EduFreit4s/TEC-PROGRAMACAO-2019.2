#include <iostream>

using namespace std;

bool ehPalindroma(string palavra){
  
  int tam = 0;  
  
  for(int i = 0; palavra[i] != '\0'; i++){
    tam++;
  }

  char inverso[tam];
  
  for(int i = 0; i < tam; i++){
    inverso[i] = palavra[tam-1-i];
  }

  for(int i = 0; i < tam; i++){
    if(palavra[i] != inverso[i]){
      return 0;
      break;
    }
  }
    return 1;
}

int main() {
  
  string palavra; // palavra digitada armazenada aqui

  cout << "Digite uma palavra: ";
  cin >> palavra; // coleta palavra 

  if(ehPalindroma(palavra)){ //chama a função e a resposta eh utilizada para imprimir uma frase
    cout << endl << "Políndroma!" << endl;
  }else{
    cout << endl << "Não eh polindroma" << endl;
  }

  // hannah
  return 0;
}