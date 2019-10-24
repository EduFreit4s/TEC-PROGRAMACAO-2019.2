#include <iostream>

#include "funcoes.h"

using namespace std;


int main(){

    vector <DadosSensor> objetos;
    
    nome_arquivo("input.txt"); // Pede o nome do arquivo a ser lido
    abre_arquivo();
    ler_arquivo();
    ordena_numeros_lidos();
    cria_objeto(objetos);  // Pede o nome do vetor de classes a ser preenchido
    ordena_class(objetos);  // Pede o nome do vetor de classes a ser ordenado
    cria_arquivo("arquivo.txt", objetos); // Pede o nome do arquivo a ser criado e o vetor de classe que vai ceder informações

    system("pause");
    return 0;
}