#ifndef FISICA_H
#define FISICA_H

#include <iostream>
#include "pessoa.h"
#include <fstream>

using namespace std;

class Fisica : public Pessoa{

    public:
        bool setCpf(string c);
        bool setRg(string r);
        bool setNascimento(int d, int m, int a);

        string getCpf();
        string getRg();
        string getNascimento();
    
    protected:

        string cpf;
        string rg;
        int dia, mes, ano;
};

void coleta_fisica();

#endif
