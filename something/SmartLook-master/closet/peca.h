#ifndef PECA_H
#define PECA_H

#include <QVector>
#include <algorithm>
#include <QFile>
#include <QStringList>
#include <QDebug>
#include "closet.h"

class Peca : public Closet{

public:
    Peca();

    QVector <Closet> roupas;

    void ordenarPorTipo();
    void ordenarPorNome();
    void ordenarPorCor();
    void ordenarPorTamanho();

    void inserirRoupa(Closet a);

    int size();
    Closet operator[](int indice);


    bool salvarDados(QString file);
    bool carregarDados(QString file);

};

#endif // PECA_H
