#include "tarefa.h"
#include <iostream>
#include "lista.h"
#include <vector>

using namespace std;

// ALL SETS

bool Tarefa::setDescricao(string d){
    if (d.size() >= 5){
        return 0;
    }else {
        return 1;
    }
}

bool Tarefa::setPrioridade(string a){
    if (a == "baixa"){
        return 0;
    }else if(a == "media"){
        return 0;
    }else if(a == "alta"){
        return 0;
    }else{
        return 1;
    }
}

void Tarefa::setStatus(bool b){
    status = b;
}

// ALL GETS

string Tarefa::getDescricao(){
    return descricao;
}

string Tarefa::getPrioridade(){
    return prioridade;
}

string Tarefa::getStatus(){
    if(!status){
        return "incompleta";
    }else{
        return "finalizada";
    }
}

// MAINFRAME

void Tarefa::obterTarefa(){
    
    string temp, temp_pri;

    cout << endl << "Digite uma descricao: ";
    cin.ignore();
    do {
        getline(cin,temp);
        
        if(setDescricao(temp)){
            cout << "Digite uma descricao maior!: ";
        }

    }while (setDescricao(temp));
    descricao = temp;

    cout << "Digite a prioridade: ";
    do {
        getline(cin,temp_pri);
        if(setPrioridade(temp_pri)){
            cout << "Prioridade: baixa, media e alta!" << endl;
        }
    }while (setPrioridade(temp_pri));
    prioridade = temp_pri;

    setStatus(0);
}








