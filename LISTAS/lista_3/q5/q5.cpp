#include <iostream>
#include "funcoes.h"

using namespace std;

int main(){
   
    nome_arquivo("input.txt");
    abre_arquivo();
    ler_arquivo();
    ordena_numeros_lidos();

    valor_frequencia();

    system("pause");
    return 0;
}

