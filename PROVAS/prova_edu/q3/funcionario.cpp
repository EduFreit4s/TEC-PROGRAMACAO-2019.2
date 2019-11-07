#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(){
    nome = "Nome";
    salario = 0;
}

Funcionario::Funcionario(string n, double s){
    nome = n;
    salario = s;
}

double Funcionario::getSalario(){
    return salario;
}
string Funcionario::getNome(){
    return nome;
}
