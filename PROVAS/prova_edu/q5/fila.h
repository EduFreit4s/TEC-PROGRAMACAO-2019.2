#ifndef FILA_H
#define FILA_H

#include <iostream>
#include <vector>

using namespace std;

class Fila{

    public:

        void adicionar(string nome);
        void remover();
        void mostrarFila();

    private:

        vector <string> nomes;



};



#endif