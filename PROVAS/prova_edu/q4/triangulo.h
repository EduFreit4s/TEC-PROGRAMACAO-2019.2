#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include "forma.h"

class Triangulo : public Forma{

    public:

        Triangulo();
        Triangulo(int c, int d);


        int getArea();
        void calculaArea();

    protected:

        int area_t;

};

#endif