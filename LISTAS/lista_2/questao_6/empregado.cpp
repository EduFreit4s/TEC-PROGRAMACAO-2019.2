#include "empregado.h"
#include <vector>

// VETOR DE OBJETOs


   

// CONSTRUTOR <-- Inicializa os atributos

    Empregado::Empregado(){}

// TODOS SETS <-- Corrige os dados

    void Empregado::setNome(string n){
        if(n.size() < 3){
            cout << "Nome invalido!";
        }else{
            nome = n;
        }
    }

    void Empregado::setSobrenome(string s){
        if(s.size() < 3){
            cout << "Sobrenome invalido!";
        }else{
            sobrenome = s;
        }
    }

    void Empregado::setSalario(float d){
        if(d > 0){
            salario = d;
        }else{
            salario = 0;
        }
    }

// TODOS GETS <-- Retorna os atributos

    string Empregado::getNome() { return nome; }

    string Empregado::getSobrenome() { return sobrenome; }
        
    float Empregado::getSalario(float n) { return salario*n; }

// COLETA <-- Preenche os atributos

    void Empregado::obterDados(){
        string temp_nome, temp_sobrenome;
        float temp_salario;
        string x;

        
        cout << endl << "Digite seu nome: ";
        cin >> temp_nome;
        cout << "Digite seu sobrenome: ";
        cin >> temp_sobrenome;
        cout << "Digite seu salario: ";
        cin >> temp_salario;

        setNome(temp_nome);
        setSobrenome(temp_sobrenome);
        setSalario(temp_salario);
    }

// EXIBE <-- exibe as informações dos atributos

    void Empregado::mostraDados(float n){

        if(n > 1){
            cout << endl << endl << "Aumento de " << n-1 <<"% no salario" << endl;
        }

        cout << endl << "Nome: " << getNome() <<" " << getSobrenome() << endl << endl;
        for(int m = 0; m < 12; m++){
            cout << "Mes: " << m+1 << " - " << " Salario R$: " << getSalario(n) << endl; 
        }
        cout << "Total      R$: " << getSalario(n)*12 << endl;
    }

// AUMENTO 10%

     void Empregado::getAumento(){
        salario *= 1.10;
    }




// FIM
