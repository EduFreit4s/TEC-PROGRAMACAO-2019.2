  
#include <iostream>
#include <map>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    
    ifstream texto;
    map <string,int> frequencia;
    string palavra;
    
    texto.open("ponto_azul.txt");
    
    while(texto>>palavra) frequencia[palavra]++;
    
    cout<<"Frequencia:" << endl;

    for(auto elemento : frequencia) cout << setw(20) << left << elemento.first << setw(15) << left << " -> frequencia: "<< elemento.second<<endl;
}