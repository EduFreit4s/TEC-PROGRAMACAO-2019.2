#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){

    map <string, string> variavel; // tá, escolher nome de variavel eh dificil

    string local, prioridade, responsavel; 

    cout << "Digite local, prioridade e o responsavel: ";
    getline(cin, local);
    getline(cin, prioridade);
    getline(cin, responsavel);

    variavel["Local"] = local;
    variavel["Prioridade"] = prioridade;
    variavel["Responsavel"] = responsavel;

    for(auto elemento : variavel) cout << setw(20) << left << elemento.first;
    cout << endl << endl;
    for(auto elemento : variavel) cout << setw(20) << left << elemento.second;
    
    return 0;
}