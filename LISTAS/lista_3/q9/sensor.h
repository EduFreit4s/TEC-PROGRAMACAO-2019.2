#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <vector>
#include <algorithm>

class DadosSensor{

    private:

        int valor;
        int frequencia;

    public:

        DadosSensor();
        DadosSensor(int val, int freq);

        int getValor();
        int getFrequencia();
        void printDados();
        void dados(int val, int freq);
};

#endif