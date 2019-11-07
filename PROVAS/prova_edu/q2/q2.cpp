#include <iostream>
#include <map>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

    ifstream texto;
    map <string,int> tamanho;
    string palavra;
    
    texto.open("texto.txt", ios::in);

    if(texto.is_open()){
        while(texto >> palavra){
            tamanho[palavra] = palavra.size();
        }

        tamanho[palavra] -= 1; // <-- Não sei explicar, mas corrige tamanho da última palavra

        cout << endl;

        for(auto elemento : tamanho){
            cout << setw(20) << left << elemento.first << setw(20) << left << " --> tamanho: "<< elemento.second<<endl;
        }
    }else{
        cout << "Arquivo não existe!" << endl;
    }
    
   





    return 0;
}