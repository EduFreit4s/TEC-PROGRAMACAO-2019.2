#ifndef FUNCOES_H
#define FUNCOES_H

#include <iostream>
#include <vector>
#include <fstream>
#include "sensor.h"
#include <iomanip> 

using namespace std;

void nome_arquivo(string nome); // Pede nome do arquivo a ser lido

void abre_arquivo(); // Incializa o arquivo

void ler_arquivo(); // Faz a leitura do arquivo e joga os valores em um vetor de inteiros

void ordena_numeros_lidos(); // Ordena esse vetor de inteiros

void cria_objeto(vector <DadosSensor>& a); // Cria objetos contendo o valor e a frenquencia desse valor no vetor inteiros

void ordena_class(vector <DadosSensor>& a); // Ordena o vetor de classe da main com a frequencia decrescente

void cria_arquivo(string nome, vector <DadosSensor>& a); // Cada objeto é trasnformando em uma linha de um arquivo txt final

bool ordena(DadosSensor& a, DadosSensor& b); // Funcao utilizada como parametro de ordenação da class DadosSensor

bool repetido(vector <DadosSensor> &a, int b); // Evita que valores repetidos sejam salvos. Parâmetro é o valor

void pesquisa(int busca);

#endif