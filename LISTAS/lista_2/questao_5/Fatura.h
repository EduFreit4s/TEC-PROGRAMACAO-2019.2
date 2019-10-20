#ifndef FATURA_H
#define FATURA_H

#include <iostream>

using namespace std;

class Fatura
{
	public:
		Fatura();
		void faturaTotal();
		
		string getNumero_serie();
		string getDescricao();
		float getPreco();
		int getQuantidade();
		
		void setNumero_serie(string s);
		void setDescricao(string d);
		void setPreco(float p);
		void setQuantidade(int q);
		
		
	protected:
		
	private: 
	
	string numero_serie; 
	string descricao; 
	float preco; 
	int quantidade;
	
	
};

#endif
