#include <vector>
#include <iostream>

using namespace std;

int main(){

    int x;
    vector <int> inteiro;

    cout << "Digite numeros inteiros: ";
    while(cin >> x){
        inteiro.push_back(x);
    }

    for(auto elemento : inteiro){
        cout << elemento << " ";
    }

    system("pause");
    return 0;
}