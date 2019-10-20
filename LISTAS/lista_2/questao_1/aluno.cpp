#include "aluno.h"
#include <iostream>

using namespace std;

string Aluno::setPalavras(string p){
  if(p.size() > 3){
      return p;
  }else{
      return "Erro";
  }
}

float Aluno::setNota(float n){
  if(n >= 0 or n <= 100){
    return n;
  }else{
    return 0;
  }
}

void Aluno::setMedia(vector <float> n){

  float soma = 0;
  
  for(int i = 0; i < n.size(); i++){ soma += n[i]; }

  media = soma/n.size();
}

float Aluno::getMedia(){
  return media;
}

void Aluno::coleta_dados(){
  string temp_n, teste, temp_d;
  float temp_nota;

  cout << "Digite seu nome: ";
  getline(cin, temp_n);
  nome = setPalavras(temp_n);
    

  do{
    cout << "Digite o nome da diciplina: ";
    getline(cin, temp_d);
    diciplinas.push_back(setPalavras(temp_d));
    cout <<"Digite a nota da diciplina: ";
    cin >> temp_nota;
    notas.push_back(setNota(temp_nota));

    cout << "Deseja colocar outra disciplina? [sim] ou [nao]" << endl;
    cin >> teste;
    cin.ignore();
  }while(teste == "sim");

  setMedia(notas);   
}

void Aluno::exibe_dados(){
  cout << endl << "Nome: " << nome << endl << endl;
  
  for(int i = 0; i < diciplinas.size(); i++){
    cout << diciplinas[i] << ", Nota: " << notas[i] << endl;
  }
  cout << endl << "Media geral: " << getMedia() << endl;
}

