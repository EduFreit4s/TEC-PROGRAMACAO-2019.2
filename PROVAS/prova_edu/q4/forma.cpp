#include "forma.h"

using namespace std;

Forma::Forma(){
     base = 0;
     altura = 0;
}

Forma::Forma(int b, int a){
    base = b;
    altura = a;
}

int Forma::getAltura(){
    return altura;
}

int Forma::getBase(){
    return base;
}
