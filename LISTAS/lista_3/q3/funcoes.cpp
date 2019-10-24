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
        cout << "O valor: " << numeros_lidos[i] << " Tem frequencia: " << count(numeros_lidos.begin(),numeros_lidos.end(),numeros_lidos[i]) << endl;
    }
}

void maior_menor(){

    ordena_numeros_lidos();

    cout << "Menor: " << numeros_lidos[0] << endl;
    cout << "Maior: " << numeros_lidos[numeros_lidos.size()-1] << endl;
}

void print(){
      for(auto i : numeros_lidos){
        cout << i << endl;
    }
}