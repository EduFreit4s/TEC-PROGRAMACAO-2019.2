#include <iostream>

using namespace std;

class Data{
    private:
        int dia, mes, ano; // <-- atributos da classe data
   
    public:

        Data(int d, int m, int a);  // <- CONSTRUTOR INICIALIZA ATRIBUTOS

        void setDia(int m);
        void setMes(int m);     // <-- métodos set verificam se os dados são válidos
        void setAno(int m);

        int getDia(); 
        int getMes();
        int getAno();
        
        void mostrarDados();    // <-- método imprime dados
};