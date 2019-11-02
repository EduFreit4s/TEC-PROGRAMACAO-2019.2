#include <iostream>
#include <map>
#include <iomanip>
#include <vector>
#define KEY "sair"

using namespace std;

int main(){

    map <string, vector <string> > mapa;
    string local, prioridade, responsavel; 
    int key;

    for(key = 0; true ; key++){ // <-- palavra sair quebra o laço

        cout << "Digite local, prioridade e o responsavel (sair p/ terminar): ";

        getline(cin, local); if(local == KEY) { break; }
        getline(cin, prioridade); if(prioridade == KEY) { break; }
        getline(cin, responsavel); if(responsavel == KEY) { break; }

        mapa["Local"].push_back(local);
        mapa["Prioridade"].push_back(prioridade);
        mapa["Responsavel"].push_back(responsavel);
    }

    for(auto elemento : mapa) cout << setw(20) << left << elemento.first;
    cout << endl << endl;

    for(int i = 0; i < key; i++){
        for(auto elemento : mapa){
            cout << setw(20) << left << mapa[elemento.first][i];
        }
        cout << endl;
    }
    
    return 0;
}