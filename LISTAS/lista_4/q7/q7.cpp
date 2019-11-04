#include <iostream>
#include <map>
#define KEY "sair"
#define KEY2 0
#define MAIOR -10000000
#define MENOR 10000000

using namespace std;

int main(){

    map<string,map<string,double>> fatura;
    string produto; 
    double valor = 0, total = 0, media = 0, quantidade = 0, menor = MENOR, maior = MAIOR;

    while(true){
        cout << "digite o nome do produto (ou ""sair"" p/ terminar): ";
        getline(cin, produto);
        if(produto == KEY) break;

        cout << "digite a quantidade (ou ""0"" p/ terminar): ";
        cin >> fatura[produto]["quantidade"];
        if(fatura[produto]["quantidade"] == KEY2) break;

        cout << "digite o valor da unidade (ou ""0"" p/ terminar): ";
        cin >> fatura[produto]["valor"];
        if(fatura[produto]["valor"] == KEY2) break;

        cin.ignore();
    }

    for(auto i: fatura){
        quantidade += fatura[i.first]["preco"]*fatura[i.first]["quantidade"];
        total += fatura[i.first]["quantidade"];
        if(fatura[i.first]["preco"]*fatura[i.first]["quantidade"] < menor){
            menor = fatura[i.first]["preco"]*fatura[i.first]["quantidade"];
        }
        if(fatura[i.first]["preco"]*fatura[i.first]["quantidade"] > maior){
            maior = fatura[i.first]["preco"]*fatura[i.first]["quantidade"];
        }
    }

    media= valor/quantidade;

    for(auto i: fatura){
        if(fatura[i.first]["preco"]*fatura[i.first]["quantidade"] == menor){
            cout << "O produto mais barato: "<<i.first << ", com valor total: "<<menor<<endl;
            break;
        }
    }

    for(auto i : fatura){
        if(fatura[i.first]["preco"]*fatura[i.first]["quantidade"] == maior){
            cout<<"O produto mais caro: "<<i.first << ", com valor total: "<<maior<<endl;
            break;
        }
    }

    cout<<"Quantidade total de produtos: "<<total<<endl;
    cout<<"Valor total: "<<valor<<endl;
    cout<<"Media de precos:"<<media;

    return 0;
}