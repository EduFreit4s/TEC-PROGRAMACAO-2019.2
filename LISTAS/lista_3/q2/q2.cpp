#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <time.h>

#define NUM 500
#define RANGE 1000

using namespace std;

int main(){
 
    int random;

    ofstream entrada;
    entrada.open("input.txt");
    
    srand(time(NULL));

    for(int i = 0; i < NUM; i++){
        random = rand()%RANGE;
        entrada << random << endl;
    }

    system("pause");
    return 0;
}