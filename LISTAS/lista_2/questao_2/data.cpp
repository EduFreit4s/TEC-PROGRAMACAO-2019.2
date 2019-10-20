#include "data.h"

Data::Data(int d, int m, int a){ // <-- CONSTRUTOR  
    setDia(d);
    setMes(m);
    setAno(a);
}

// TODOS SETS

void Data::setDia(int m){ // <-- VALIDAÇÃO DO DIA (NÃO NECESSÁRIO)
    if(m > 31 || m < 1){
        dia = 1;
    }else{
        dia = m;
    }
}

void Data::setMes(int m){ // <-- VALIDAÇÃO DO MES
    if( m > 12 || m < 1){
        mes = 1;
    }else{
        mes = m;
    }
}

void Data::setAno(int m) { ano = m; }

// TODOS GETS

int Data::getDia() { return dia; }

int Data::getMes() { return mes; }

int Data::getAno() { return ano; }

void Data::mostrarDados(){
    cout << endl << "Data: " << getDia() << " / " << getMes() << " / " << getAno() << endl; 
}

// FIM