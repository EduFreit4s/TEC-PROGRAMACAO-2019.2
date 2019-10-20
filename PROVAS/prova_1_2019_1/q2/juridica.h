#pragma once

#include <iostream>
#include "pessoa.h"
#include <fstream>

using namespace std;

class Juridica : public Pessoa{

    public:
        bool setCnpj(string c);
        bool setInscricao_estadual(string r);
        bool setNome_fantasia(string n);

        string getCnpj();
        string getInscricao_estadual();
        string getNome_fantasia();

    protected:

        string cnpj;
        string inscricao_estadual;
        string nome_fantasia;
};

void coleta_juridica();