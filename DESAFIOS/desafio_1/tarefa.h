#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Tarefa{

    private:

        string descricao;
        string prioridade;
        bool status;

    public:

        bool setDescricao(string d);
        bool setPrioridade(string p);
        void setStatus(bool b);
 
        string getDescricao();
        string getPrioridade();
        string getStatus(); //Retorna “Finalizada” ou “Incompleta”
 
        void obterTarefa();
};


