#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>

using namespace std;

class Pessoa{

    public:

        bool setCodigo(string c);
        bool setNome(string n);
        bool setTelefone(string t);
        bool setCep(string p);

        string getCodigo();
        string getNome();
        string getTelefone();
        string getCep();
       


    protected:

        string codigo;
        string nome;
        string telefone;
        string cep;

};

#endif
