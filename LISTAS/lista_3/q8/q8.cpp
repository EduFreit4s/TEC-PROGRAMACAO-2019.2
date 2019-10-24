#include <iostream>
#include "funcoes.h"
using namespace std;

int main(){

    vector <DadosSensor> objetos;
    
    nome_arquivo("input.txt");
    abre_arquivo();
    ler_arquivo();
    ordena_numeros_lidos();
    cria_objeto(objetos);
    ordena_class(objetos);

    for(int i = 0; i < objetos.size(); i++) objetos[i].printDados(); // Final. Todos objetos são plotados na tela

    system("pause");
    return 0;
}