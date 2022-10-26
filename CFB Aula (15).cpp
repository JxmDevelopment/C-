#include <iostream>
using namespace std;
int main (){
	
	int num1=12;
	int num2=40;
	char opc='s';
	// > , < , >= , <= , == ( igual ), != ( diferente )
	if(num1 > num2) // Se for verdadeiro | else = Se não, caso contrário
	{
	cout << "Maior";
	}
	else
	{
	cout << "Menor"; // Vai aparecer Menor porque 12 é menor do que 40
	}
	return 0;
}
