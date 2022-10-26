#include <iostream>
using namespace std;
int main (){
	
	int num=12;
	char opc='s';
	// > , < , >= , <= , == ( igual ), != ( diferente )
	if(num >= 10) // Se for verdadeiro | else = Se não, caso contrário
	{
	cout << "Maior"; // Vai aparecer maior porque 12 é maior do que 10
	}
	else
	{
	cout << "Menor";
	}
	return 0;
}
