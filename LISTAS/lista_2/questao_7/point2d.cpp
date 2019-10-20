#include <iostream>
#include "point2d.h"
#include <vector>

using namespace std;

    // CONSTRUTORES: NULO & COM PARAMETRO

    Point2d::Point2d(){ objetos(0, 0); }

    Point2d::Point2d(float m_x, float m_y){ objetos(m_x, m_y); }

    // SALVA OS DADOS DE CADA OBJETO {CRIADO} NA ENESIMA POSICAO DO VECTOR M_X/M_Y

    void Point2d::objetos(float a, float b){ 
        m_x.push_back(a);
        m_y.push_back(b);
    }
    
    // PLOTA OS DADOS NA TELA

    void Point2d::print(){
        pos = 0; // <-- O TRUQUE ESTA AQUI
        cout << "Point2d(" << m_x[pos] <<", " << m_y[pos] <<")" << endl;
        pos++;  // <-- O TRUQUE ESTA AQUI
    }

    // TODA VEZ QUE A FUNCAO PRINT FOR CHAMADA, POS EH INCREMENTADA. AS VARIAVEIS M_X[POS] & M_Y[POS] DEVOLVEM
    // DADOS NA MESMA ORDEM QUE FORAM PREENCHIDOS 