#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include "forma.h"

class Triangulo : public Forma{

    public:

        Triangulo();
        Triangulo(double c, double d);

        double getArea();
};

#endif