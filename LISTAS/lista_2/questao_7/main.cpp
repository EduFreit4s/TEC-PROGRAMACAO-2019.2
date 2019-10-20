#include <iostream>
#include "point2d.h"

using namespace std;

int main(){

    Point2d inicio;
    Point2d final(3.0, 4.0);
    Point2d Eta_Carinae(7500, 1677);

    inicio.print();
    final.print();

    Eta_Carinae.print();

    // funciona para n objetos

    return 0;
}
