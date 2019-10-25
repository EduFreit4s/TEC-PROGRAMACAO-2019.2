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

void cria_objeto(vector <DadosSensor>& a){

    for(int i = 0; i < numeros_lidos.size(); i++){   // Passo 3

        int val_temp, fre_temp;

        val_temp = numeros_lidos[i]; 
        fre_temp = count(numeros_lidos.begin(),numeros_lidos.end(),numeros_lidos[i]);

        if(repetido(a, val_temp)){  // Evita repetição
            a.push_back(DadosSensor(val_temp, fre_temp)); // Evita repetição
        }

    }
}

void ordena_class(vector <DadosSensor>& a){
    sort(a.begin(), a.end(), ordena);
}

void cria_arquivo(string nome, vector <DadosSensor>& a){
    nome_arquivo(nome);
    saida.open(nome_arquivo_temp);

    saida << right << "Valor" << setw(17) << "Frequencia" <<  endl << endl; // <-- Cabeçalho
    for(int i = 0; i < a.size(); i++) saida << a[i].getValor() << setw(10) << a[i].getFrequencia() << endl;  // Numeros
    saida.close();
}

bool ordena(DadosSensor& a, DadosSensor& b){                               
    return a.getFrequencia() > b.getFrequencia();                       
}

bool repetido(vector <DadosSensor> &a, int b){

    bool key = true;

    for(int i = 0; i < a.size(); i++){
        if(a[i].getValor() == b){
            key = false;
            break;
        }
    }
    return key;
}