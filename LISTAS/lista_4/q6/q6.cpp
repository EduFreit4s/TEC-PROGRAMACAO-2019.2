#include "menu.h"

using namespace std;

int main(){

    string texto[5] = {
        "\n Digite [1] para inserir novo nome e email!",
        "\n Digite [2] para apagar um nome e email!",
        "\n Digite [3] para modificar nome ou email!",
        "\n Digite [4] para mostar todos nomes e emails!",
        "\n Digite [5] para sair \n\n"
    };

    int key;

    do{
        for(auto i : texto) cout << i;
        cin >> key;
        menu(key);
    }while(key != 5);

    return 0;
}