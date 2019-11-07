#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> nomes;
    string nome, sobrenome, x;

    do{
        cout << "Digite um nome: ";
        getline(cin, nome);

        cout << "Digite um sobrenome: ";
        getline(cin, sobrenome);
    
        if(nomes.find(sobrenome) == nomes.end()) nomes[sobrenome]= nome;
        else cout << "sobrenome ja existe!" << endl;
        
        cout << "deseja continuar (s/ sim ou n/ nao): ";
        getline(cin, x);
    }while( x != "n");

    for(auto i : nomes) cout << i.first <<", " << i.second << endl;
    return 0;
}