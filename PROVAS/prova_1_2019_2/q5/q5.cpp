#include "fila.h"

using namespace std;

int main(){

    Fila nome;
    string x, n;

    nome.adicionar("Nao deu");
    nome.adicionar("Uber");
    nome.adicionar("ai");
    nome.adicionar("vou");
    nome.adicionar("eu");

    nome.remover();

    nome.mostrarFila();
    
    return 0;
}