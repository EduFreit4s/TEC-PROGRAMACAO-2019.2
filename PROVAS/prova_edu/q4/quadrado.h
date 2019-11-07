#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream>
#include "forma.h"

class Quadrado : public Forma{

    public:

        Quadrado();
        Quadrado(int b, int a);

        int getArea();
        void calculaArea();

    protected:

        int area_q;
};

#endif