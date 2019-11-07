#include "triangulo.h"

using namespace std;

Triangulo::Triangulo(){
    base = 0;
    altura = 0;
}

Triangulo::Triangulo(double b_t, double a_t){
    base = b_t;
    altura = a_t;
}

double Triangulo::getArea(){
    return (getAltura()*getBase())/2;
}

