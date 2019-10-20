#include "Fatura.h"
using namespace std; // Necessario para trabalhar com strings
#include <iostream> // Necessario para cout e cin

// CONSTRUTOR <- Codigo é execultado quando o objeto é criado.

	Fatura::Fatura(){  // <- definindo valores para cada atributo

		cout << endl << endl << "		Isso eh um teste!		"<< endl << endl;
		
		setDescricao("Abacate - Perfeito para fazer aquela vitamina");
		setNumero_serie("7896260700216");
		setQuantidade(10);
		setPreco(2);
		
		faturaTotal(); // <- chama fatura
	}

// FUNCAO PRINCIPAL

	void Fatura::faturaTotal(){ // <- imprime a fatura na tela
		cout << getDescricao() << endl << getNumero_serie() << "	" << getQuantidade() << " UND	R$: " << getPreco() << "		" << "R$: " << getQuantidade()*getPreco() << endl;
	}
		
// TODOS GETS  <- devolve os atributos privados da class fatura

	string Fatura::getNumero_serie(){
		return numero_serie;
	}
	string Fatura::getDescricao(){
		return descricao;
	}
	float Fatura::getPreco(){
		return preco;
	}
	int Fatura::getQuantidade(){
		return quantidade;
	}
			
// TODOS SETS <- corrige os dados antes que eles sejam salvos no objeto

	void Fatura::setNumero_serie(string s){
		if(s.size() < 3){
			numero_serie = "Codigo invalido!";
		}else{
			numero_serie = s;	
		}
	}

	void Fatura::setDescricao(string d){
		if(d.size() < 5){
			descricao = "Descricao invalida!";
		}else{
			descricao = d;	
		}
	}

	void Fatura::setPreco(float p){
		if( p < 0){
			preco = 0;
		}else{
			preco = p;	
		}
	}

	void Fatura::setQuantidade(int q){
		if( q < 0){
			quantidade = 0;
		}else{
			quantidade = q;	
		}
	}
	

// FIM