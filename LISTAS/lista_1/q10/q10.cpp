#include <iostream>
using namespace std;

bool criancasSorrindo(bool a, bool b){
  if( a == b){
    return 1;
  }else{
    return 0; 
  }
}

int main() {

  bool a, b; // salva estados

  cout << "digite os dois estados (1/true ou 0/false):  ";
  cin >> a >> b; //coleta estados
  if(criancasSorrindo(a, b)){ // chama a funcao, a resposta eh usada para imprir palavras
    cout << "True" << endl;
  }else{
    cout << "False" << endl;
  }
  
return 0;
}