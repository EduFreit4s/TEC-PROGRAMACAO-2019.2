#include <iostream>
#include "point2d.h"
#include <math.h>

using namespace std;

class Distancia : public Point2d{

    public:

        Distancia(Point2d p1, Point2d p2){
            inicio = p1;
            fim = p2;
        }

        float getDistancia(){
            return sqrt((inicio.m_x - fim.m_x) * (inicio.m_x - fim.m_x) + (inicio.m_y - fim.m_y) * (inicio.m_y - fim.m_y));
        }
    
    private:
    
    Point2d inicio;
    Point2d fim;
};
