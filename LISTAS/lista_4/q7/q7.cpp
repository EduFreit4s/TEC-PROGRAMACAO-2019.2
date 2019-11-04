#include <iostream>
#include <map>
#include <iomanip>
#define KEY "sair"
#define KEY2 0
#define MAIOR -1000000000000000
#define MENOR 1000000000000000

using namespace std;

int main(){

    map <string, map <string, double>> fatura;
    
    string produto;
    int quantidade = 1, total = 0, key = 1;
    double valor = 1, media = 0, menor = MENOR, maior = MAIOR;

    while(true){
        cout << "digite o nome do produto (ou ""sair"" p/ terminar): ";
        getline(cin, produto);
        if(produto == KEY) break;

        cout << "digite a quantidade: ";
        cin >> quantidade;
        if(quantidade == KEY2) break;

        cout << "digite o valor da unidade: ";
        cin >> valor;
        if(valor == KEY2) break;

        fatura[produto]["quantidade"] = quantidade;
        fatura[produto]["valor"] = valor;

        cin.ignore();
    }

    cout << setw(20) << left << "Produto" << setw(20) << left << "Quantidade" << setw(20) << left << "Preco" << endl;
    for(auto i : fatura){
        cout << setw(20) << left << i.first << setw(20) << left << fatura[i.first]["quantidade"] << setw(20) << left << fatura[i.first]["valor"] << endl;
    }

    valor = 0;
    

    for(auto i : fatura){
        total += fatura[i.first]["quantidade"];
        media = (media+(fatura[i.first]["valor"]*fatura[i.first]["quantidade"]))/key;
        valor += fatura[i.first]["valor"]*fatura[i.first]["quantidade"];
        key++;
    }

    for(auto i : fatura){
        if(fatura[i.first]["valor"] < menor) menor = fatura[i.first]["valor"]*fatura[i.first]["valor"];
        if(fatura[i.first]["valor"] > maior) maior = fatura[i.first]["valor"]*fatura[i.first]["valor"];
    }



    
    
    for(auto k : fatura){
        if((fatura[k.first]["valor"]*fatura[k.first]["valor"]) == menor){
            cout << "Menor preco total: " << k.first << ", total: " << fatura[k.first]["valor"]*fatura[k.first]["valor"] << endl;
            break;
        }
    }



    for(auto k : fatura){
        if((fatura[k.first]["valor"]*fatura[k.first]["valor"]) == maior){
            cout << "Maior preco total: " << k.first << ", total: " << fatura[k.first]["valor"]*fatura[k.first]["valor"] << endl;
            break;
        }
    }

    cout << "Total de produtos: " << total << endl;
    cout << "Media de precos: " << media << endl;
    cout << "Total das compras: " << valor << endl;

    return 0;
}