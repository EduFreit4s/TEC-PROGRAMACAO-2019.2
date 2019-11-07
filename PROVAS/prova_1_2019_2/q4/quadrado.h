#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>
#include "forma.h"

class Quadrado : public Forma{

    public:

        Quadrado();
        Quadrado(double b, double a);

        double getArea();
};

#endif