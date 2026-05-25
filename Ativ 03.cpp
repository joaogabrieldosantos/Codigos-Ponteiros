3) Qual a saída do programa?

#include <iostream>
void main(){
		int i = 5;
		int *p;
		p = &i;
		cout << p << "\t" 
				 << (*p+2) << "\t" 
         << **&p <<"\t"
         << (3**p) <<"\t"
         << (**&p + 4);

		return 0;
}
____________________________________________________________________________________________
R: 

#include <iostream>
using namespace std;

int main(){
	int i = 5;
	int *p;
	
	p = &i;
	
	cout << p << "\t"
	<< (*p+2) << "\t"
	<< (3**p) << "\t"
	<< (**&p + 4);
	return 0;

}

A saida sera: 0x78fe4c        7       15      9.
