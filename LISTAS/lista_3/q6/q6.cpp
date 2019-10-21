#include <iostream>
#include "sensor.h"

using namespace std;

int main(){
    
    DadosSensor dados(11,12);
    
    dados.printDados();
        
    system("pause");
    return 0;
}