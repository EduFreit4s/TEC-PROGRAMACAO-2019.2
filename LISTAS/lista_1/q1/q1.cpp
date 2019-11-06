#include <iostream>

using namespace std;

int main() {

  string frase[3] = { // vetor de strings
    "Oi Mundo!, Estou pronto para C++",
    "Hey, escrever std:: o tempo todo é chato d+",
    "Mas eu sei como evitar isso :)"
  };

  for(int i = 0; i < 3; i++) cout << frase[i] << endl;
  //chama o vetor de strings e imprime cada frase.

  return 0;
}