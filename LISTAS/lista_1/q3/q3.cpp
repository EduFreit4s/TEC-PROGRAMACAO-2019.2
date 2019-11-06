#include <iostream>
#include <fstream>

using namespace std;

int main(){

  string frases[3] = {  
    "Estou adicionando uma linha" ,
    "C++ é mais fácil que C" 
  };

  ofstream entrada;  
  entrada.open("input.txt"); 

  for(int i = 0; i < 2; i++){        
    entrada << frases[i] << endl;
  } 
  entrada.close(); 
    
  return 0;
}


