// INCREMENTO - DECREMENTO
#include <iostream>
using namespace std;
int main(){
	
	int n1=10;
	
	cout << n1++ << "\n"; // Pos-incremento - Imprime '10'
	cout << ++n1 << "\n"; // Pre-incremento - Imprime '11'
	// Se nao marcar como leitura ele vai somar 10+1 e depois 1+11 ( que sera o resultado da primeira conta )
	
	return 0;
}