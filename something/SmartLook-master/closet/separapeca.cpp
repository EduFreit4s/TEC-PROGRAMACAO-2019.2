#include "separapeca.h"

separaPeca::separaPeca(){}

void separaPeca::separa(Peca a)
{
    tronco.clear();
    pernas.clear();
    calcado.clear();
    t.clear();
    p.clear();
    c.clear();

    for(int i = 0; i < a.roupas.size();i++)
    {
        if(a.roupas[i].getTipo() == "Camisa" or a.roupas[i].getTipo() == "Camiseta" or a.roupas[i].getTipo() == "Blusa")
        {
            tronco[a.roupas[i].getNome()] = i;
        }

        if(a.roupas[i].getTipo() == "Saia" or a.roupas[i].getTipo() == "Jeans" or a.roupas[i].getTipo() == "Bermuda" or a.roupas[i].getTipo() == "Shortinho")
        {
            pernas[a.roupas[i].getNome()] = i;
        }

        if(a.roupas[i].getTipo() == "Tenis" or a.roupas[i].getTipo() == "Sapatenis" or a.roupas[i].getTipo() == "Chinelo")
        {
            calcado[a.roupas[i].getNome()] = i;
        }
    }

    for(auto i : tronco)
    {
        t.push_back(a.roupas[i.second]);
    }

    for(auto i : pernas)
    {
        p.push_back(a.roupas[i.second]);
    }

    for(auto i : calcado)
    {
        c.push_back(a.roupas[i.second]);
    }

}
