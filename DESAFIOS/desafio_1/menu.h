#pragma once

#include <iostream>
#include <vector>
#include "tarefa.h"
#include "lista.h"

using namespace std;

void menu(){

    Lista tarefa; // Lista real onde será salvo as tarefas

    int opcao; // armazena a opção do menu

    vector <string> menu = {        // textao de opções do menu
        "\n Informe a sua opcao: \n" ,
        "1 - Adicionar tarefa",
        "2 - Mostrar tarefas",
        "3 - Mostrar tarefas por descricao",
        "4 - Mostrar tarefas por prioridade",
        "5 - Mostrar tarefas por status",
        "6 - Alterar status da tarefa",
        "7 - Remover tarefa",
        "8 - Sair \n"
     };


    do{

        Tarefa tarefa_temp; // classes temporarias necessárias para chamar metodos
        Lista lista_temp;
        string descricao_temp;

        
        for(string i : menu){
            cout << i << endl; // exibe menu na tela
        } 

        cin >> opcao;

        switch (opcao){
            case 1: 
                system("cls"); 
                tarefa_temp.obterTarefa();
                tarefa.adicionarTarefa(tarefa_temp);
                break;

            case 2:
                system("cls");
                tarefa.mostrarTarefas();
                break;

            case 5:
                system("cls");
                tarefa.mostrarTarefasPorStatus();
                break;
            
            case 3:
                system("cls");
                tarefa.mostrarTarefasPorDescricao();
                break;
                
            case 6:
                system("cls");
                cin.ignore();
                cout << "Digite a descricao da terefa: ";
                getline(cin, descricao_temp); 
                tarefa.mudarStatus(descricao_temp);
                break;

            case 7: 
                system("cls");
                cin.ignore();
                cout << "Digite a descricao da terefa: ";
                getline(cin, descricao_temp); 
                tarefa.removerTarefa(descricao_temp);
                break;

            case 8:
                system("cls");
                cout << endl << "Ate breve =(" << endl << endl;
                break;

            default: 
                system("cls");
                cout << endl << "Opcao invalida, digite um numero de 1 a 8!" << endl; 
        }
    
    }while (opcao != 8);

}
