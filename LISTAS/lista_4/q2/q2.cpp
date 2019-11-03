#include <iostream>
#include <map>

using namespace std;

int main(){
    map<char,int> contador;
    string palavra;
    cout << "Informe uma palavra: ";
    getline(cin,palavra);

    for(auto letra : palavra){
        if(letra!=' ')
            contador[letra]++;
    }

    for(auto e : contador){
        cout << e.first << " - "<<e.second<<endl;
    }

    return 0;
}