#include <iostream>
#include <fstream>

#define TAM 12 // tamanho + 2

using namespace std;

int main(){

    ifstream leitura;
    string temp;

    leitura.open("arquivo.txt", ios::in);

    for(int i = 0; i < TAM; i++){
        getline(leitura, temp);
        cout << temp << endl;
    } 

    system("pause");
    return 0;
}