#include "menu.h"

using namespace std;

string nome, email;
map <string, string> livro;

void inserir(){
    cin.ignore();
    cout << "Digite o nome: ";
    getline(cin, nome);

    cout << "Digite o email: ";
    getline(cin, email);

    livro[nome] = email; // <-- cria nova chave-valor
}

void apagar(){

    bool key = true;

    cin.ignore();
    cout << "Digite o nome que deseja apagar: ";
    getline(cin, nome);

    if(livro.find(nome) != livro.end()){
        livro.erase(nome);
        key = false;
    }

    if(key) cout << "Esse nome nao existe!" << endl; // Se key não for alterado no laço acima, significa que o find não achou o nome no map
}

void modificar(){

    bool key = true;
    string temp;

    cin.ignore();
    cout << "Digite o nome que deseja modificar: ";
    getline(cin, nome);

    if(livro.find(nome) != livro.end()){

        cout << "Deseja alterar nome ou endereco? (n/ nome ou e/email): ";
        getline(cin, temp);

        if(temp == "n"){

            email = livro[nome];
            livro.erase(nome);

            cout << "Digite o novo nome: ";
            getline(cin, nome);
            livro[nome] = email;

        }else if(temp == "e"){
            
            cout << "Digite o novo email: ";
            getline(cin, email);
            livro[nome] = email;
        }else{
            cout << "digite ""e"" para email ou ""n"" para nome!" << endl;
        }
        key = false;
    }

    if(key) cout << "Esse nome nao existe!" << endl;
}

void mostrar(){
    for(auto i : livro) cout << "Nome: " << i.first << ", email: " << i.second << endl;
}

void menu(int a){
    switch(a){
        case 1: inserir(); break;
        case 2: apagar(); break;
        case 3: modificar(); break;
        case 4: mostrar(); break;
        case 5: break;
        default: cout << "digite um numero de 1 a 5!" << endl; break;
    }
}
