#include <iostream>
#include "point2d.h"


using namespace std;

    // CONSTRUTORES: NULO & COM PARAMETRO

    Point2d::Point2d(){ 
        m_x = 0;
        m_y = 0; 
        }

    Point2d::Point2d(float x, float y){
        m_x = x;
        m_y = y;
    }
    // SALVA OS DADOS DE CADA OBJETO {CRIADO} NA ENESIMA POSICAO DO VECTOR M_X/M_Y

    
    // PLOTA OS DADOS NA TELA

    void Point2d::print(){
       
        cout << "Point2d(" << m_x <<", " << m_y <<")" << endl;
        
    }

    // TODA VEZ QUE A FUNCAO PRINT FOR CHAMADA, POS EH INCREMENTADA. AS VARIAVEIS M_X[POS] & M_Y[POS] DEVOLVEM
    // DADOS NA MESMA ORDEM QUE FORAM PREENCHIDOS 

  