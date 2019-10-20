#pragma once

#include <iostream>
#include <vector>
#include "tarefa.h"
#include <algorithm>

using namespace std;

class Lista{

    private:

        vector <Tarefa> lista;

    public:

        void adicionarTarefa(Tarefa t);
        void removerTarefa(string d); // remove UMA tarefa baseado na descrição
        void mudarStatus(string d); // inverte o status de uma tarefa baseado na descrição
        void mostrarTarefas();
        int size();
 
        void mostrarTarefasPorDescricao();
        void mostrarTarefasPorPrioridade();
        void mostrarTarefasPorStatus();
      
};

bool setDescricao(Tarefa& a, Tarefa& b);
bool setStatus(Tarefa& a, Tarefa& b);