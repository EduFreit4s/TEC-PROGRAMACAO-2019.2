#include <iostream> // fluxo de entrada e saída
#include <fstream> // fluxo de arquivos
#include <stdlib.h>     /* srand, rand */
#include <time.h> // tempo usado na função RAN
#include <locale> // pontuação, abnt2
#include <stdio.h>

using namespace std;

//função desenha homem de palito na tela
void face(int chances){

    cout << " ____" << endl;
    cout << " |/ |" << endl;

    if(chances <= 5) cout << " |  o" << endl;
    else cout << " |   " << endl;

    if(chances > 4) cout << " |   " << endl;
    if(chances == 4) cout << " |  |" << endl;
    if(chances == 3) cout << " | /|" << endl;
    if(chances <= 2) cout << " | /|\\ " << endl;

    if(chances > 1) cout << " |   " << endl;
    if(chances == 1) cout << " | /" << endl;
    if(chances == 0) cout << " | / \\ " << endl;

    cout << "_|_   " << endl << endl;

}

string busca(char letra, string forca, string palavra, int tam){
 /* função busca letras correspondentes na palavra aleatória */
    int gatilho = 0; //usado para dizer que letra não existe na palavra

    for(int i = 0; i < tam; i++){ // varre a palavra buscando a letra escolhida
        if(letra == forca[i]){
            palavra[i] = letra; // substitui traços ('_') pela letra encontrada na palavra aleatória
            gatilho++;
        }

    }

    if(gatilho != 0){
        return palavra; //devolve a palavra modificada
    }else{
        return "false"; //devolve gatilho para dizer que errou
    }
}

int main(){

    setlocale(LC_ALL, "portuguese"); //abnt2

    string forca;  //salva palavra escolhida aleatóriamente
    string letras_ant, // salva as letras digitadas
    palavra_generica; // ponte entre função string e variavel char
    int tam, chances = 6; //tamanho da palavra forca
    char letra; //salva o palpite

    srand(time(NULL)); //zera a semente rand
    int random = rand()%16; //função modular gera pseudo aleatório no intervalo de 0 a 15

    ifstream entrada; // fluxo de entrada de arquivos
    entrada.open("input.txt"); //abre aquivo input.txt

    for(int i = 0; i < random; i++){ //extrai a palavra do arquivo usando o número aleatório.
      getline(entrada, forca); //copia a linha[aleatorio] para string forca
    }
    entrada.close(); //fecha arquivo de texto.


    tam = (int)forca.size(); //diz o tamanho da palavra escolhida. usado para imprimir a quantidade de traços na tela.

    char palavra[tam]; // palavra generica que tem o mesmo tamanho da palavra original

    for(int i = 0; i < tam; i++) palavra[i] = '-';
    // preenche a palavra generica com traços

    while(palavra != forca){
        system("cls"); //apaga cmd linux
        face(chances); //invoca função face
        cout << "Palavra: " << (string)palavra << endl; //imprime palavra generica dica '----'
        cout << "Letras anteriores: " << letras_ant << endl;

        if(chances == 0){
            cout << endl << "Você perdeu, Fim de jogo" << endl << "Palavra: " << forca << endl;

            fflush(stdin); 
            getchar(); // evita que programa compilado feche rapidamente no windowns
            return 0;
        }

        cout << "Digite uma letra: ";
        cin >> letra; // salva palpite em char letra

        if((busca(letra, forca, palavra, tam)) != "false"){ //invoca função string usca para procurar se a letra palpite existe na palavra aleatória
            palavra_generica = (busca(letra, forca, palavra, tam));

            for(int i = 0; i < tam; i++){
                palavra[i] = palavra_generica[i];
            }
        }else{ //se não existir, gatilho "false" entra nesse else decrementando as chances
            chances--;
        }

        letras_ant += letra; // salva letras digitadas
        letras_ant += ", ";
    }

    //mensagem de vitória
    cout << "Palavra: " << palavra << endl << "Você ganhou!" << endl;

    fflush(stdin);
    getchar();

  return 0;
}



