#include <iostream>
using namespace std;

string hello(string a){
  string b = "olá ";
  return b += a;
}

int main() {

  string a; // salva nome

  cout << "digite seu nome: "; //pede para digitar nome
  cin >> a; //coleta nome
  cout << hello(a) << endl; // chama a funcao que devolve a resposta

return 0;
}