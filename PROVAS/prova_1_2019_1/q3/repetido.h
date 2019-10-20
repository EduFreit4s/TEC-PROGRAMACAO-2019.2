#ifndef REPETIDO_H
#define REPETIDO_H

#include <vector>
#include <iostream>

using namespace std;

bool repetido(string sobrenome, vector <string> nomes){

    bool key = false;

    for(int i = 0; i < nomes.size(); i++){
        if(nomes[i].find(sobrenome) != -1){
            key = true;
            break;
        }
    }
    return key;
}

#endif
