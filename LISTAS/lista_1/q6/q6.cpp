#include <iostream>

using namespace std;

int main() {
  
  int a, b; // numeros a e b
  char c; // operador matematico

  cout << "digite dois numeros" << endl;
  cin >> a >> b; //coleta os numeros
  cout << "escolha uma operação (+, -, * ou /): "; 
  cin >> c; //coleta o operador

  switch(c){ //imprime a operação matematico
    case '+': cout << a << " + " << b << " = " << a+b << endl; break; 
    case '-': cout << a << " - " << b << " = " << a-b << endl; break; 
    case '*': cout << a << " * " << b << " = " << a*b << endl; break; 
    case '/': cout << a << " / " << b << " = " << a/b << endl; break; 
  }

  return 0;
}