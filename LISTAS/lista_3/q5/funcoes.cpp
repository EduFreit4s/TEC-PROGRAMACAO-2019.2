#include "funcoes.h"

char nome_arquivo_temp[100];  
ifstream arquivo;
ofstream saida;
vector <int> numeros_lidos;

void nome_arquivo(string nome){
    int i;
    for(i = 0; nome[i] != '\0'; i++){
        nome_arquivo_temp[i] = nome[i];
    }

    nome_arquivo_temp[i+1] = '\0';
}

void abre_arquivo(){
    arquivo.open(nome_arquivo_temp, ios::in);
}

void ler_arquivo(){
    int num;
    while(arquivo >> num) numeros_lidos.push_back(num);
}

void ordena_numeros_lidos(){
    sort(numeros_lidos.begin(), numeros_lidos.end());
}

void valor_frequencia(){
    for(int i = 0; i < numeros_lidos.size(); i++){
        int freq_temp = count(numeros_lidos.begin(),numeros_lidos.end(),numeros_lidos[i]);
        int valor_temp = numeros_lidos[i];
        if(repetido(valor_temp, i )){
            cout << "O valor: " << valor_temp << ", tem frequencia: " << freq_temp  << endl;
        }
    }
}

bool repetido(int busca, int indice){

    bool key = true;

    for(; indice < numeros_lidos.size(); indice++){
        if(numeros_lidos[indice + 1] == busca){
            key = false;
            break;
        }
    }
    return key;
}