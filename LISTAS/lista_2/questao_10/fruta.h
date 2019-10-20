#include <iostream>
//#ifndef FRUTA_H
//#define FRUTA_H

#pragma once

using namespace std;

class Fruta{

    public:

        void setNome(string n);
        void setCor(string c);

        string getNome();
        string getCor();

    protected:

        string nome;
        string cor;
};

//#endif