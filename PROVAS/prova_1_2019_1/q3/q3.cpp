#include <iostream>
#include <vector>
#include "repetido.h" // (string a, vector <string> b) return 1 se string a estiver em qualquer posicao de vector b 

using namespace std;
    
int main(){

    vector <string> nomes;
    string nome, sobrenome, temp;

    do{
        string completo;

        cout << "Digite um nome: ";
        getline(cin, nome);

        cout << "Agora um sobrenome: ";
        getline(cin, sobrenome);

        completo = nome; // "juntando" >> nome, sobrenome 
        completo += ", ";
        completo += sobrenome;

        if(repetido(sobrenome, nomes)) cout << "Sobrenome repetido, tente novamente!" << endl;
        else nomes.push_back(completo);

        cout << "Deseja adiciona outro nome (s ou n)? ";
        cin >> temp;
        cin.ignore();

    }while(temp != "n");

    for(auto i : nomes) cout << i << endl; // printa na tela

    system("pause");
    return 0;
}