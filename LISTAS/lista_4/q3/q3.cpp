#include <iostream>
#include <map>
using namespace std;
#define KEY "sair"

int main(){

    map <string, string> Lista;
    string nome, telefone;
   
    cout << "Digite um nome ou ""sair"" para fechar o programa e exibir a lista!" << endl << endl;

    do{
        cout << "Nome: ";
        getline(cin, nome);

        if(nome!=KEY){
            if(Lista.find(nome) == Lista.end()){
                cout << "Digite o telefone: ";
                getline(cin, telefone);
                Lista[nome] = telefone;

            }else cout << nome << " ja existe!, telefone: " << Lista[nome] << endl;
        }
    }while(nome!= KEY);

    for(auto elemento : Lista) cout << "Nome: " << elemento.first << ", telefone: " << elemento.second << endl;

    return 0;
}