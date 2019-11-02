#include <iostream>
#include <map>
using namespace std;

int main(){

    string nome, chama_no_zap;
    map <string, string> telefone;
    telefone["null"] = "vazio";

    cout << "Digite um nome ou ""sair"" para fechar o programa e exibir a lista!" << endl;

    do{
        cout << "Nome: ";
        cin >> nome;
            
        if(nome != "sair"){
            bool key = false;
            for(auto elemento : telefone){
                if(elemento.first == nome){
                    cout << elemento.first << " ja existe!, " << "telefone: " << elemento.second << endl;
                    key = true;
                    break;   
                }
            }
            if(key == false){
                cout << "Digite o telefone: ";
                cin >> chama_no_zap;
                telefone[nome] = chama_no_zap;
            }
        }
    }while(nome != "sair");

    for(auto i : telefone){
        if(i.first != "null"){
            cout << "Nome: " << i.first << ", telefone: " << i.second << endl; 
        }
    }
    return 0;
}