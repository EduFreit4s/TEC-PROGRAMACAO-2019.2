#include <iostream>
#include "distancia.h"

using namespace std;

int main(){

    Point2d inicio(13, 23);
    Point2d fim(11, 7);

    Distancia delta(inicio, fim);

    inicio.print();
    fim.print();

    cout << "A distancia entre os pontos eh: "<< delta.getDistancia() << endl;

    return 0;
}