#ifndef FUNCOES_H
#define FUNCOES_H

#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip> 
#include <algorithm>

using namespace std;

void nome_arquivo(string nome); // Pede nome do arquivo a ser lido

void abre_arquivo(); // Incializa o arquivo

void ler_arquivo(); // Faz a leitura do arquivo e joga os valores em um vetor de inteiros

void ordena_numeros_lidos(); // Ordena esse vetor de inteiros

void valor_frequencia();

void maior_menor();

void print();

#endif