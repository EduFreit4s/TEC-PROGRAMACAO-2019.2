#include <iostream>
#include "funcoes.h"

using namespace std;

int main(){

    nome_arquivo("input.txt");

    int n;

    cout << "Digite o numero que deseja buscar: ";
    cin >> n;

    pesquisa(n);

    system("pause");
    return 0;
}