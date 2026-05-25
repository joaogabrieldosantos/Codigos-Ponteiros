2) Escreva um trecho de código em que seja declarado duas variáveis qualquer e em seguida seus respectivos endereços de memória;

#include<iostream>
using namespace std;

int main(){
		//seu código entra aqui

		return 0;
}

__________________________________________________________________________________________
R:

#include <iostream>
using namespace std;

int main(){
	int x, y;
	x = 2;
	y = 8;
	
	
	int *a, *b;
	
	a = &x;
	b = &y;
	
	cout << "O endereco de memoria de X: " << &x << endl;
	cout << "O endereco de memoria de Y: " << &y << endl;
	
	return 0;
}
