#include "pessoa.h"


bool Pessoa::setCodigo(string c){
    codigo = c;
    return 1;
}

bool Pessoa::setNome(string n){
    if(n.size() > 5){
        nome = n;
        return 1;
    }else{
        cout << endl << "Nome muito curto! Escolha um nome com 5 ou mais letras. Tente novamente: ";
        nome = "nome";
        return 0;
    }
}

bool Pessoa::setTelefone(string t){
    if(t.size() == 9){
        telefone = t;
        return 1;
    }else{
        cout << endl << "Telefone invalido! Formato: 91234-5678. Tente novamente: ";
        telefone = "98888-8888";
        return 0; 
    }
}

bool Pessoa::setCep(string p){
    if(p.size() == 8){
        cep = p;
        return 1;
    }else{
        cout << endl << "CEP invalido! Fomato: 12345-678. Tente novamente: ";
        cep = "12345678";
        return 0;
    }
}

string Pessoa::getCodigo(){
    return codigo;
}

string Pessoa::getNome(){
    return nome;
}

string Pessoa::getTelefone(){
    return telefone;
}

string Pessoa::getCep(){
    return cep;
}


