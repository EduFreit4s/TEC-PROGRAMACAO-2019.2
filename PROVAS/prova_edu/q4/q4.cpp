#include "forma.h"
#include "triangulo.h"
#include "quadrado.h"

using namespace std;

int main(){

    Forma triangulo(5, 2);
    Forma quadrado(15, 20);

    cout << "Area do triangulo: " << (triangulo.getAltura()*triangulo.getBase())/2<< endl;
    cout << "Area do quadrado: " <<  quadrado.getAltura()*quadrado.getBase() << endl;

    return 0;
}