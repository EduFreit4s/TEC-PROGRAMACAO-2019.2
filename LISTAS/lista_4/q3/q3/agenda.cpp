#include "agenda.h"

using namespace std;

map <string, string> Telefone;

void agenda(map <string, string> &a){
    Telefone = a;
    Telefone["null"] = "NULL";
}

void mostra_lista(){
    for(auto i : Telefone){
        if(i.first != "null"){
            cout <<"Nome: " << i.first <<  ", telefone: "  << i.second << endl;
        }
    }
}

bool nome_repetido(string nome){
    bool key = false;
    for(auto elemento : Telefone){
        if(elemento.first == nome){
            key = true;
            break;   
        }
    }
    return key;
}

void exibe_repetido(string nome){
    for(auto elemento : Telefone){
        if(nome_repetido(nome)){
            cout << elemento.first << " ja existe!, " << "telefone: " << elemento.second << endl;
            break;   
        }
    }
}

void coleta_telefone(string nome){
    string chama_no_zap;
    cout << "digite o telefone: ";
    cin >> chama_no_zap;
    Telefone[nome] = chama_no_zap;
}