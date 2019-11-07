#include <iostream>
#include <map>

using namespace std;

int main(){

    map <string, string > nomes;
    string nome, sobrenome;

    for(int i = 0; i < 5; i++){

        cout << endl << "Digite um nome: ";
        getline(cin, nome);

        cout << "Agora sobrenome: ";
        getline(cin, sobrenome);

        nomes[sobrenome] = nome;
    } 

    cout << endl;
    
    for(auto elemento : nomes){
        cout << elemento.second << " " << elemento.first << endl;
    }

    return 0;
}