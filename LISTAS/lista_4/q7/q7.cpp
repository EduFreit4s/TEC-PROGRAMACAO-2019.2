#include <iostream>
#include <map>
#include <iomanip>
#define MAIOR -10000000
#define MENOR 10000000
#define KEY "sair"
#define KEY2 0
using namespace std;

int main(){

    double maior = MAIOR, menor = MENOR, total = 0, quantidade = 0, media;
    map<string,map<string,double>> fatura;
    string produto; 

    while(true){
        cout << endl << "digite o nome do produto (ou ""sair"" p/ terminar): ";
        getline(cin, produto); if(produto == KEY) break;
        
        cout << "digite a quantidade (ou ""0"" p/ terminar): ";
        cin >> fatura[produto]["quantidade"]; if(fatura[produto]["quantidade"] == KEY2) break;
        
        cout << "digite o valor da unidade (ou ""0"" p/ terminar): ";
        cin >> fatura[produto]["valor"]; if(fatura[produto]["valor"] == KEY2) break;
        
        cin.ignore();
    }

    for(auto i : fatura){
        total += fatura[i.first]["valor"]*fatura[i.first]["quantidade"];
        quantidade += fatura[i.first]["quantidade"];
        
        if(fatura[i.first]["valor"]*fatura[i.first]["quantidade"] < menor){
            menor = fatura[i.first]["valor"]*fatura[i.first]["quantidade"];
        }
        if(fatura[i.first]["valor"]*fatura[i.first]["quantidade"] > maior){
            maior = fatura[i.first]["valor"]*fatura[i.first]["quantidade"];
        }
    }

    media = total/quantidade;

    for(auto i : fatura){
        if(fatura[i.first]["valor"]*fatura[i.first]["quantidade"] == maior){
            cout << endl << "O produto mais caro: " << i.first << ", com valor total R$: " << setprecision(3) << maior << endl;
            break;
        }
    }

    for(auto i: fatura){
        if(fatura[i.first]["valor"]*fatura[i.first]["quantidade"] == menor){
            cout << "O produto mais barato: " << i.first << ", com valor total R$: "<< setprecision(3) << menor << endl;
            break;
        }
    }

    cout << "Quantidade total de produtos: " << quantidade << endl;
    cout << "Valor total R$: " << setprecision(4) << total << endl;
    cout << "Media de precos R$: " << setprecision(3) << media;

    return 0;
}