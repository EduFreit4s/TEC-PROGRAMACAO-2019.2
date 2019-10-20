#include <iostream>
#include <locale.h>

#include "maca_verde.h"
#include "maca.h"
#include "banana.h"

using namespace std;

int main(){

	setlocale(LC_ALL, "pt_BR.utf8");
	
	Maca a("vermelha");
	Banana b;
	MacaVerde c;
 
	cout << "A " << a.getNome() << " é " << a.getCor() << endl;
	cout << "A " << b.getNome() << " é " << b.getCor() << endl;
	cout << "A " << c.getNome() << " é " << c.getCor() << endl;

    system("pause");
	return 0;
}

//chcp 65001 <-- ativar utf_8 no cmd