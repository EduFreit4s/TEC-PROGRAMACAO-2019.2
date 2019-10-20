#include <iostream>
#include <vector>

using namespace std;

class Aluno{
    private:
        string nome;
        vector <string> diciplinas;
        vector <float> notas;
        float media;
        
    public:

        string setPalavras(string p);
        float setNota(float n);
        void setMedia(vector <float> n);

        float getMedia();

        void coleta_dados();
        void exibe_dados();
             
};

