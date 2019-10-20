#include <iostream>
#include "sensor.h"

using namespace std;

int DadosSensor::getValor(){
return 0;
}
int DadosSensor::getFrequencia(){
return 0;
}
void DadosSensor::printDados(){
    cout << "O valor é " << valor << " e tem frequência: " << frequencia << endl;
}
void DadosSensor::dados(int val, int freq){
    valor = val;
    frequencia = freq;
}