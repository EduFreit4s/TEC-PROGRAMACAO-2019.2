#ifndef FORMA_H
#define FORMA_H

#include <iostream>

class Forma{

    public:

        Forma();
        Forma(int base, int altura);

        int getAltura();
        int getBase();

    protected:

        int base;
        int altura;

};

#endif