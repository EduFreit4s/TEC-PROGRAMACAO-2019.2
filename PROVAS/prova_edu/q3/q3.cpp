#include "funcionario.h"
using namespace std;

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

    for(auto elemento : teste){
        cout << "Nome: " << elemento.getNome();
        cout <<", salario R$: " << elemento.getSalario() << endl; 
    }

    return 0;
}
