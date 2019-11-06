#include <iostream>
#include <fstream>

using namespace std;

int main(){

  string name;

  ifstream entrada;     
  entrada.open("input.txt");
  
  while(getline(entrada, name)){ 
    cout << name << "\n";
  }
  entrada.close(); 
  
  return 0;
}

