#include <iostream>
#include <vector>

using namespace std;

class Point2d{

    public: 

        Point2d();
        Point2d(float m_x, float m_y);

        void objetos(float a, float b);
       
        void print();

    protected:

    int pos;
    vector <float> m_x;
    vector <float> m_y;
    
};