#include "triangulo.h"

Triangulo::Triangulo(){
    Forma();
}

Triangulo::Triangulo(int b_t, int a_t){
    Forma(b_t, a_t);
}

int Triangulo::getArea(){
    return area_t;
}

void Triangulo::calculaArea(){
    area_t = altura*base/2;
}

