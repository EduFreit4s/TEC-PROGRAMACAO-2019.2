#include <iostream>

using namespace std;

int main() {
  int a, b = 88;  // palpite e numero magico
  char c = 'y'; // gatilho

  cout << "Digite um numero: ";
  
  do{
    cin >> a; // Coleta palpite
    if(a > b){
      cout << "palpite alto" << endl;
    }else if( a < b) cout << "palpite baixo" << endl;
    cout << "desiste? (x = sim/ qualquer outra letra p/ não)" << endl;
    cin >> c;
  }while((a != b) && (c != 'x'));
  
  cout << "Seu futuro não está escrito, o de ninguém está!" << endl;

  return 0;
}