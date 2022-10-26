// do while

#include <iostream>
using namespace std;
int main (){
	
	int cont;
	cont=20;	
	do // Se nao tivesse o "do" o programa ia aparecer apenas o "Finalizado" por o cont é 20 e é para aparecer o resultado "finalizado" com 20. ( Ele obriga executar )
	{
	cout << "Teste - " << cont << "\n";
	cont++;
	}
	while (cont < 20); // Ele executa 1x, percebe que o cont não é mais "< 20" e para o loop "while"
	cout << "Finalizado\n";
	return 0;
}