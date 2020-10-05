#include <iostream>
#include <fstream> 
using namespace std;

int main() {
  string aluno, curso, opcao;
  double cre;
  ofstream arquivo;
  arquivo.open("alunos.csv",ios::app);

  if(arquivo.is_open())
    do{
      cout<< "Nome: ";
      getline(cin, aluno);
      cout<< "Curso: ";
      getline(cin, curso);
      cout<< "CRE: ";
      cin>> cre;
      cout<< "digite 'sim' p/continuar: ";
      cin>>opcao; 
      cin.ignore();
      arquivo << aluno << ", " << curso << ", " << cre << endl;
    }while(opcao=="sim");
  else
    cout << "Arquivo não encontrado!" << endl;
    
  return 0;
}
