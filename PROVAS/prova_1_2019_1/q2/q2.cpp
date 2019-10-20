#include "fisica.h"
#include "juridica.h"

using namespace std;

int main(){

    for(int i = 0; i < 3; i++) cout << "Cadastro pessoa fisica: " << i+1 << "/" << 3 << endl << endl, coleta_fisica();
    for(int i = 0; i < 3; i++) cout << "Cadastro pessoa juridica: " << i+1 << "/" << 3 << endl << endl, coleta_juridica();

    system("pause");
    return 0;
}