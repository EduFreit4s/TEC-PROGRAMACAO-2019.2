#include "forma.h"

using namespace std;

Forma::Forma(){
    base = 0;
    altura = 0;
}

Forma::Forma(double b, double a){
    base = b;
    altura = a;
}

double Forma::getAltura(){
    return altura;
}

double Forma::getBase(){
    return base;
}
