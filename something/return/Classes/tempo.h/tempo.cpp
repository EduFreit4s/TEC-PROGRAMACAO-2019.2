#include "tempo.h"

using namespace std;

int getempo(char x){
    int z;
    time_t t;
    struct tm * tempo;
    time(&t);
    tempo = localtime(&t);
    switch (x){
        case 'D': z = tempo -> tm_mday; break;
        case 'M': z = tempo -> tm_mon+1; break;
        case 'A': z = tempo -> tm_year+1900; break;
        case 's': z = tempo -> tm_sec; break;
        case 'm': z = tempo -> tm_min; break;
        case 'h': z = tempo -> tm_hour; break; 
    }
    return z;
}

int getDia(){
    return getempo('D');
}

int getMes(){
    return getempo('M');
}

int getAno(){
    return getempo('A');
}

int getSegundo(){ 
    return getempo('s');
}

int getMinuto(){
    return getempo('m');
}

int getHora(){
    return getempo('h');
}

string getData(){
    char data[30];
    string out;
    sprintf(data, "%02d/%02d/%04d", getDia(), getMes(), getAno());
    out = data;
    return out;
}


string getTempo(){
    char tempo[30];
    string out;
    sprintf(tempo, "%02d:%02d:%02d", getHora(), getMinuto(), getSegundo());
    out = tempo;
    return out;
}