#include <iostream>
using namespace std;
int main (){
	
	int cont;
	cont=0;
	while(cont < 1000)
	{
	cout << cont << "\n";
//	cont ++; // Se não incrementar a variável entra num loop infinito
	if(cont == 500)
	{
	break;
	}
	cont ++; // Moveu para ca para chegar ate o 500, porque estava indo ate 499
    }
	return 0;
}

// break = Interromper loop