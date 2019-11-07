#include "fila.h"

using namespace std;

int main(){

    Fila nome;
    string x, n;

    nome.adicionar("Jose");
    nome.adicionar("maria");

    nome.remover();

    nome.mostrarFila();
    
    return 0;
}