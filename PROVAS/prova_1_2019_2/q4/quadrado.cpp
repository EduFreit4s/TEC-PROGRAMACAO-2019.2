#include "quadrado.h"

using namespace std;

Quadrado::Quadrado(){
    base = 0;
    altura = 0;
}

Quadrado::Quadrado(double b_q, double a_q){
    base = b_q;
    altura = a_q;
}

double Quadrado::getArea(){
    return getBase()*getAltura();
}
