#include <iostream>

using namespace std;

int main() {  // exibe o tamanho de cada variavel

  cout << "Tamanho da variavel (int): " <<  sizeof(int) << " Bytes" << endl;
  cout << "Tamanho da variavel (short): " <<  sizeof(short) << " Bytes" << endl;
  cout << "Tamanho da variavel (long): " <<  sizeof(long)  << " Bytes" << endl;
  cout << "Tamanho da variavel (char): " <<  sizeof(char) << " Byte" << endl;
  cout << "Tamanho da variavel (float): " <<  sizeof(float) << " Bytes" << endl;
  cout << "Tamanho da variavel (double): " <<  sizeof(double) << " Bytes" << endl;
  cout << "Tamanho da variavel (bool): " <<  sizeof(bool) << " Byte" << endl;
  
return 0;
}