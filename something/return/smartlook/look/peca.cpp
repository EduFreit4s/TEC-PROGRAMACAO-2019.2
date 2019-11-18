#include "peca.h"

void ordenarPorNome()
{
    std::sort(Peca.begin(),Peca.end(),[](Closet a, Closet b){
        return a.getNome()<b.getNome();
    });
}

void ordenarPorTipo()
{
    std::sort(Peca.begin(),Peca.end(),[](Closet a, Closet b){
        return a.getTipo()<b.getTipo();
    });
}

void ordenarPorCor()
{
    std::sort(Peca.begin(),Peca.end(),[](Closet a, Closet b){
        return a.getCor()<b.getCor();
    });
}

void ordenarPorTamanho()
{
    std::sort(Peca.begin(),Peca.end(),[](Closet a, Closet b){
        return a.getTamanho()<b.getTamanho();
    });
}

void criaCloset(Closet a)
{
    Peca.push_back(a);
}
