#include <iostream>
#include "maca.h"
#include "banana.h"
#include <locale>

using namespace std;

int main(){

    Maca a("Vermelha");
	Banana b;
 
	cout << "A " << a.getNome() << " é " << a.getCor() << ".\n";
	cout << "A " << b.getNome() << " é " << b.getCor() << ".\n";
	
	system("pause");
    return 0;
}