#include "fila.h"

using namespace std;

void Fila::adicionar(string nome){
    nomes.push_back(nome);
}

void Fila::remover(){
    nomes.erase(nomes.begin());
}

void Fila::mostrarFila(){
    for(auto elemento : nomes){
        cout << "Nome: " << elemento << endl;
    }
}
