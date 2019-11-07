#include "funcionario.h"
#include <algorithm>

using namespace std;

bool ordem(Funcionario a, Funcionario b){
    return a.getSalario() > b.getSalario();
}

int main(){

    double salario;
    string nome, key;
    vector <Funcionario> teste;

    do{

        cout << "Digite nome do funcionario: ";
        getline(cin, nome);

        cout << "Agora o salario: ";
        cin >> salario;
        cin.ignore();

        teste.push_back(Funcionario(nome, salario));

        cout << "Deseja adicionar outro funcionario (s/sim ou n/ nao): ";
        getline(cin, key);

    }while(key != "n");

    cout << endl;

    sort(teste.begin(), teste.end(), ordem);

    for(auto elemento : teste){
        cout << "Nome: " << elemento.getNome();
        cout <<", salario R$: " << elemento.getSalario() << endl; 
    }

    return 0;
}
