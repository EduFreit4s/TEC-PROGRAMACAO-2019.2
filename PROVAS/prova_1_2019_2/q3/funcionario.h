#ifndef FUNCIONARO_H
#define FUNCIONARIO_H

#include <iostream>
#include <vector>

using namespace std;

class Funcionario{

    public:

        Funcionario();
        Funcionario(string nome, double salario);

        double getSalario();
        string getNome();

    protected:

        string nome;
        double salario;
};

#endif