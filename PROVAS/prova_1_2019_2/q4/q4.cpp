#include "triangulo.h"
#include "quadrado.h"

using namespace std;

int main(){

    Triangulo triangulo(5, 2);
    Quadrado quadrado(15, 10);

    cout << "Area do triangulo: " << triangulo.getArea() << endl;
    cout << "Area do quadrado: " <<  quadrado.getArea() << endl;

    return 0;
}