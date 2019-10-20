#include <iostream>

using namespace std;

class Point2d
{
    public:

        Point2d(){
            m_x = 0;
            m_y = 0; 
        }
        
        Point2d(float x, float y){
            m_x = x;
            m_y = y;
        }

        void print(){
            cout << "Point2d(" << m_x <<", " << m_y <<")" << endl;
        }

        float m_x;
        float m_y;
};
