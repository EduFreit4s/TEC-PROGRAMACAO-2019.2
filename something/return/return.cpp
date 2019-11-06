#include <iostream>
#include <tuple>

using namespace std;

tuple <string, string, int> setNome(string nome, string sobrenome){

    string n = "nome", s = "sobrenome";
    int q = 0;

    if(nome.size() > 3){
        n = nome;
        q += nome.size();
    }

    if(sobrenome.size() > 3){
        s = sobrenome;
        q += nome.size();
    }

    return make_tuple(n, s, q); // make_tuple <-- envia multi parametros return
}

int main(){

    string n, s;
    int q;

    string nome, sobrenome;

    cout << "Digite o nome: ";
    getline(cin, nome);

    cout << "Digite o sobrenome: ";
    getline(cin, sobrenome);

    tie(n, s, q) = setNome(nome, sobrenome); // tie <--- recebe multi parametros

    cout << "Nome verificado: " << n << endl;
    cout << "Sobrenome verificado: " << s << endl;
    cout << "Quantidade total de letras de nome e sobrenome: " << q;
    
    return 0;
}