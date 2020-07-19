#include <iostream>
#include <vector>
using namespace std;

void pesquisa(vector<int> v, int tentativa);

int main()
{
    vector<int> v;
    int n, temp, x, a, b;
    
    cout << "digite a quantidade de numeros: ";
    cin >> n;

    while (n > 0){
        n--;
        cout << "digite o " << "(" << n+1 << ") numero: ";
        cin >> temp;
        v.push_back(temp);
    }

    cout << endl << "digite a quantidade de tentativas: ";
    cin >> x;

    while (x > 0) {
        x--;
        cout << "digite um numero: ";
        cin >> a;
        pesquisa(v, a);
    }

    return 0;
}

void pesquisa(vector<int> v, int tentativa) {
    
    bool ok = false;
    int pos, maior = -2147483648;
    
    for(int i = 0; i < v.size(); i++){
        if(v[i] > maior){
            maior = v[i];
            pos = i;
        }else if(v[i] == tentativa){
            ok = true;
            pos = i; 
            break;
        }
    }

    (ok) ? cout << "Yes " << pos+1 << endl : cout << "No " << pos+1 << endl;

}