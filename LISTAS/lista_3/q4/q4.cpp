#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>  

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


    sort(inteiros.begin(), inteiros.end());


    cout << "Menor: " << inteiros[0] << endl;
    cout << "Maior: " << inteiros[inteiros.size()-1] << endl;



    return 0;
}