#include <iostream>
#include "sensor.h"
#include <vector>
#include <fstream>
#include <iomanip> 

using namespace std;
                                                                                                                       ////
// Função utilizada pelo sort para ordena uma coleção de objetos... Frenquência eh o parâmetro                       o  /   <-- na chuva eu não me molho, pois estou coberto de razão
bool ordena(DadosSensor& a, DadosSensor& b){                                //                                      /|\/
    return a.getFrequencia() > b.getFrequencia();                           //                                      / \.
}

int main(){

    vector <DadosSensor> data;
    ifstream entrada;
    vector <int> numeros_temp;
    int num;

    entrada.open("input.txt", ios::in);

    while(entrada >> num) numeros_temp.push_back(num); // Passo 1: Ler numeros do arquivo txt // Envia para vector int temp
    
    sort(numeros_temp.begin(), numeros_temp.end()); // Passo 2: Ordena esses números

    for(int i = 0; i < numeros_temp.size(); i++){   // Passo 3

        int val_temp, fre_temp;

        val_temp = numeros_temp[i]; // <-- Aqui fica salvo o número (valor)

        // Essa função conta a frequencia desse valor no vetor
        fre_temp = count(numeros_temp.begin(),numeros_temp.end(),numeros_temp[i]);

        // No argumento do push back, o construtor é invocado. Ele cria um objeto
        // que prenche valor e frequencia. O push back leva esse objeto para data.
        data.push_back(DadosSensor(val_temp, fre_temp));
        // Essa sacada do construtor evita que seja necessário criar um objeto temporário.
    }

    sort(data.begin(), data.end(), ordena); // Passo 4 <-- Os objetos data são ordenados utilizando frequencia como parametro

    ofstream saida; // Passo 5 <-- Os objetos são enviados para o txt
    saida.open("arquivo.txt"); // , ios::app <-- evita subscrição 

    saida << right << "Valor" << setw(17) << "Frequencia" <<  endl << endl; // <-- Cabeçalho
    for(int i = 0; i < data.size(); i++) saida << data[i].getValor() << setw(10) << data[i].getFrequencia() << endl;  // Numeros
    saida.close();

    system("pause");
    return 0;
}