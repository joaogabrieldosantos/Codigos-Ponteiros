1)Fazer um rastreio representando(desenhando) a memória do computador ao se executar a sequência de comandos abaixo:
int var;
int *ptr;
var = 10;
ptr = &var;
__________________________________________________________________________________________
R:

#include <iostream>
using namespace std;

int main(){
	int var;
	int *ptr;
	var = 10;
	ptr = &var;
	
	cout << "O valor de var eh: " << var << endl;
	cout << "A memoria do computador armazenado do var foi: " << &var << endl;
	cout << "" << endl;
	cout << "O valor de prt eh: " << *ptr << endl;
	cout << "A memoria do computador onde o prt foi armazenado eh: " << ptr << endl;
	
	
	return 0;
}
