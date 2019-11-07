#ifndef FORMA_H
#define FORMA_H

#include <iostream>

class Forma{

    public:

        Forma();
        Forma(double base, double altura);

        double getAltura();
        double getBase();

    protected:

        double base;
        double altura;
};

#endif