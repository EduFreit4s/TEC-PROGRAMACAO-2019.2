#ifndef PECA_H
#define PECA_H

#include <QVector>
#include "closet.h"
#include <algorithm>


    QVector <Closet> Peca;


    void criaCloset(Closet a);

    void ordenarPorTipo();
    void ordenarPorNome();
    void ordenarPorCor();
    void ordenarPorTamanho();

#endif // PECA_H
