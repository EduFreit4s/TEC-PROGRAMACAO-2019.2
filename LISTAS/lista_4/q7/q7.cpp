#include <iostream>
#include <map>
#include <iomanip>
#define KEY "sair"
#define KEY2 0
#define MENOR 1000000000
#define MAIOR -1000000000

using namespace std;

int main(){

    map <string, map <string, map <string, map < int, float>>>> fatura;
    string produto;
    int quantidade, total, key = 1;
    float valor, media = 0, menor, maior;

    while(true){
        cout << "digite o nome do produto: ";
        getline(cin, produto);
        if(produto == KEY) break;

        cout << "digite a quantidade: ";
        cin >> quantidade;
        if(quantidade == KEY2) break;

        cout << "digite o valor da unidade: ";
        cin >> valor;
        if(valor == KEY2) break;

        fatura[produto]["quantidade"]["preco"][quantidade] = valor;

        cin.ignore();
    }


    for(auto i : fatura){
        for(auto j : fatura[i.first]["quantidade"]["preco"]){
            total += j.first;
            media = (media + j.second)/key;
            key++;
        }
    }

     for(auto i : fatura){
        for(auto j : fatura[i.first]["quantidade"]["preco"]){
            if(j.second < MENOR){
                menor = j.second;
            }

            if(j.second > MAIOR){
                maior = j.second;
            }
        }
    }


    return 0;
}