#include <iostream>
#include <vector>
#include <algorithm>

class DadosSensor{
    private:

    int valor;
    int frequencia;

    public:

    int getValor();
    int getFrequencia();
    void printDados();
    void dados(int val, int freq);
    void dados();
};