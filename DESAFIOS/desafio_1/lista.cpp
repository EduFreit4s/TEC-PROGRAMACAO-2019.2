#include "lista.h"
#include <vector>


using namespace std;

/// MANIPULA

void Lista::adicionarTarefa(Tarefa t){  
    lista.push_back(t); 
}

void Lista::removerTarefa(string d){ 

    string opcao_temp; // salva opcao temporaria
    bool gatilho = false;
    
    for(int i = 0; i < lista.size(); i++){  // varre todas as terfas da lista

        if(lista[i].getDescricao() == d){ // o gatilho é a descricao! 

            gatilho = true;            

            cout << "Tarefa: " << lista[i].getDescricao() << endl;
            cout << "Prioridade: " << lista[i].getPrioridade() << endl;
            cout << "Status: " << lista[i].getStatus() << endl;


            cout << "Deseja deletar essa tarefa? (sim ou nao): ";
            cin >> opcao_temp; 

            if(opcao_temp == "sim"){
                cout << endl << "Perigo /!\\" << endl << "Isso apagara a tarefa para sempre!" << endl << endl;
                cout << "Deseja continuar? (sim ou nao)" << endl;
                cin >> opcao_temp;

                if(opcao_temp == "sim"){
                    lista.erase(lista.begin() + i);
                    cout << "Tarefa deletada com sucesso!" << endl;
                }else{
                    cout << "Nenhuma alteracao efetuda!" << endl;
                }

            }else{
                cout << "Nenhuma alteracao efetuda!" << endl;
            }
        }
    } // chave do for de busca

    if(!gatilho){
        cout << "Tarefa nao encontrada!" << endl;
    }
} 

void Lista::mudarStatus(string d){

    string opcao_temp; // salva opcao temporaria
    bool gatilho = false;
    
    for(int i = 0; i < lista.size(); i++){  // varre todas as terfas da lista

        if(lista[i].getDescricao() == d){ // o gatilho é a descricao! 

            gatilho = true;

            cout << "Tarefa: " << lista[i].getDescricao() << endl;
            cout << "Status: " << lista[i].getStatus() << endl;

            cout << "Deseja altera o status dessa tarefa? (sim ou nao): ";
            cin >> opcao_temp; 

            if(opcao_temp == "sim" and lista[i].getStatus() == "incompleta"){
                lista[i].setStatus(1);
                cout << "status alterado com sucesso!" << endl;
               
            }else if(opcao_temp == "sim" and lista[i].getStatus() == "finalizada"){
                lista[i].setStatus(0);
                cout << "status alterado com sucesso!" << endl;
            }else{
                cout << "Nenhuma alteracao efetuda!" << endl;
                
            }

        }

    } // chave do for de busca

    if(!gatilho){
        cout << "Tarefa nao encontrada!" << endl;
    }
} // chave do metodo

void Lista::mostrarTarefas(){// ok

    cout << endl;

    if(lista.size() > 0){
        for(int i = 0; i < lista.size(); i++){
            cout << "Descricao: " << lista[i].getDescricao() << endl;
            cout << "Prioridade: " << lista[i].getPrioridade() << endl;
            cout << "Status: " << lista[i].getStatus() << endl << endl;
        }
    }else{
        cout << "Nenhuma tarefa cadastrada!" << endl;
    }
}

/// MOSTRA

void Lista::mostrarTarefasPorDescricao(){ //ok
   sort(lista.begin(), lista.end(), setDescricao);
   Lista::mostrarTarefas();
}

void Lista::mostrarTarefasPorStatus(){
    sort(lista.begin(), lista.end(), setStatus);
    Lista::mostrarTarefas();
}

int Lista::size(){ // nao utilizado
    return lista.size();
}

// FUNCOES UTILIZADAS NO SORT

bool setDescricao(Tarefa& a, Tarefa& b){
    return a.getDescricao() < b.getDescricao();
}

bool setStatus(Tarefa& a, Tarefa& b){
    return a.getStatus() > b.getStatus();
}

