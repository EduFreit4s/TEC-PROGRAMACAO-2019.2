#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char c; //gatilho
  string nome; //salva a frase digitada
  ofstream entrada; //fluxo de saida de dados
  entrada.open("input.txt", ios::app); // abre o arquivo sem subscrever as linhas

  cout << "Deseja adicionar uma linha? y/n" << endl; //pergunta ao usuario se ele deseja escrever uma frase
  cin >> c; // coleta o gatilho

  if(c == 'y'){ // gatilho 
    cout << "digite a sua frase: " << endl; 
    cin.ignore(); //apaga o buffer do teclado
    getline(cin, nome); // copia a linha digitada para string nome
    entrada << nome << endl; // joga frase no arquivo
  } //escreve a frase em cada linha      
  
  entrada.close(); //fecha arquivo input.txt
    
  return 0;
}