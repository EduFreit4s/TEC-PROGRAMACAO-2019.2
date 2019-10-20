#include <iostream>     // Entrada e saída de dados, cin e cout
#include <vector>       // Vetor dinamico
#include <algorithm>    // Sort 

using namespace std;

// Função utilizada pelo sort como critério de ordenação
bool num_caracteres(string a, string b){ 
        return a.size()<b.size();
    }

int main(){

    string palavra;
    vector <string> palavras;

    cout << "Digite tres palavras: ";

    // Pede 3 palavras de acordo com a questão
    for(int i = 0; i < 3; i++) cin >> palavra, palavras.push_back(palavra);
    
    // Ordena o vetor de palavras com base no tamanho de cada string
    sort(palavras.begin(), palavras.end(), num_caracteres); 

    // Se depois de ordenado, a primeira posição tiver a mesma quantidade de caracteres que a última posição do vetor, então 
    // todas as palavras tem a mesma quantidade de letras
    if(palavras[palavras.size()-1].size() == palavras[0].size()){ 
        cout << "Palavras tem a mesma quantidade de letras!" << endl;
    }else{
    // Se não, plota a primeira posição (menos letras) e a última (mais letrs) 
        cout << "Maior: " << palavras[palavras.size()-1] << endl;
        cout << "Menor: " << palavras[0] << endl;
    }

    system("pause"); // Evita que o programa feche inesperadamente por erro ou fim da execução 
    return 0;
}
