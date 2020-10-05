#include <iostream>
#include <fstream> 
#include <vector>
#include <algorithm>
using namespace std;

struct Aluno{
  string aluno, curso;
  double cre;
};

int main() {
  vector<Aluno> Sala;
  struct Aluno a; 
  ifstream texto;
  texto.open("alunos.csv");

  if(texto.is_open())
    while(getline(texto, a.aluno, ',')){
      getline(texto, a.curso, ',');
      texto >> a.cre;
      Sala.push_back(a);
    }  
  else
    cout << "Arquivo não encontrado!" << endl;
  
  sort(Sala.begin(),Sala.end(), [](Aluno a, Aluno b){return a.cre > b.cre;});

  for(int i =0; i<Sala.size()-1;i++)
    cout <<Sala[i].aluno<<", "<< Sala[i].curso <<", "<< Sala[i].cre;
    
  return 0;
}
