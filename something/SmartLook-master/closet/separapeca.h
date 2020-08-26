#ifndef SEPARAPECA_H
#define SEPARAPECA_H

#include <map>
#include "peca.h"
#include "QString"

class separaPeca : public Peca
{
public:
    separaPeca();
    void separa(Peca a);

    std::map <QString, int> tronco;
    std::map <QString, int> pernas;
    std::map <QString, int> calcado;

    QVector <Closet> t;
    QVector <Closet> p;
    QVector <Closet> c;
};

#endif // SEPARAPECA_H
