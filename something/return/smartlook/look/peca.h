#ifndef PECA_H
#define PECA_H

#include <QVector>
#include <algorithm>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include "closet.h"

class Peca{

private:

        QVector <Closet> roupas;

public:
    Peca();

    void ordenarPorTipo();
    void ordenarPorNome();
    void ordenarPorCor();
    void ordenarPorTamanho();

    void inserirRoupa(Closet a);

    int size();
    Closet operator[](int indice);


    void salvarDados(QString file);
    void carregarDados(QString file);
};


#endif // PECA_H
