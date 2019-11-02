#include "agenda.h"

using namespace std;

int main(){

    string nome, key = "sair";
    map <string, string> telefone;
    
    agenda(telefone);

    cout << "Digite um nome ou ""sair"" para fechar o programa e exibir a lista!" << endl << endl;

    do{
        cout << "Nome: ";
        cin >> nome;

        if(nome != key){
            exibe_repetido(nome);
            if(!nome_repetido(nome)) coleta_telefone(nome);
        }

    }while(nome != key);

    cout << endl << "Lista: " << endl << endl;
    mostra_lista();

    return 0;
}