#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int valor;
    vector <int> inteiros;
    ifstream entrada;
    entrada.open("input.txt");

    while(entrada >> valor){
        inteiros.push_back(valor);
    }
    entrada.close();

    for(auto i : inteiros){
        cout << i << endl;
    }

    return 0;
}
