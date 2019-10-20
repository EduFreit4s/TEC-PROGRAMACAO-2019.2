#include <iostream>

using namespace std;


class Empregado{

    public: 

        Empregado();
        
        void obterDados();
        void mostraDados(float n);

        void setNome(string n);
        void setSobrenome(string s);
        void setSalario(float d);

        string getNome();
        string getSobrenome();
        float getSalario(float n);
        void getAumento();

    private:

        int q_objetos;
        string nome;
        string sobrenome;
        float salario;
};


