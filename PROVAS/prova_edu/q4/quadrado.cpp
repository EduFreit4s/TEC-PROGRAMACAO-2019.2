#include "quadrado.h"

Quadrado::Quadrado(){
    Forma();
}

Quadrado::Quadrado(int b_q, int a_q){
    Forma(b_q, a_q);
}

int Quadrado::getArea(){
    return area_q;
}

void Quadrado::calculaArea(){
    area_q = base*altura;
}
