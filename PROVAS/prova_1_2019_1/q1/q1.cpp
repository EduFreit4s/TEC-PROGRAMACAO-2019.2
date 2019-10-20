#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool num_caracteres(string a, string b){ 
        return a.size()<b.size();
    }

int main(){

    string palavra;
    vector <string> palavras;

    cout << "Digite tres palavras: ";

    for(int i = 0; i < 3; i++){
        cin >> palavra;
        palavras.push_back(palavra);
    }

    sort(palavras.begin(), palavras.end(), num_caracteres);

    if(palavras[palavras.size()-1].size() == palavras[0].size()){
        cout << "Palavras tem a mesma quantidade de letras!" << endl;
    }else{
        cout << "Maior: " << palavras[palavras.size()-1] << endl;
        cout << "Menor: " << palavras[0] << endl;
    }

    system("pause");
    return 0;
}
