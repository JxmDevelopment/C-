#include <iostream>
using namespace std;
int main (){
	
	cout << "Digite um numero no intervalo de 45 ate 72" << endl;
	int i = 0;
	cin >> i;
	
	if (i>= 45 && i <= 72)
	{
		cout << "Obrigado por informar o numero no intervalo solicitado" << endl;
	
	if (i == 45 || i == 72)
		cout << "O numero digitado e igual ao valor de algum extremo" << endl;
	}
	else
	{
		cout << "O numero digitado nao esta no intervalo solicitado" << endl;
	}
	return 0;
}

/*
== Igual
!= Diferente
> = maior
< = menor
>= maior ou igual
<= menor ou igual
&& = E
|| = Ou
! = Verdadeiro ou Falso
*/