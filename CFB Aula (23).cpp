#include <iostream>
using namespace std;
int main ()
{
	int val; // Valor a ser testado
	cout << "[1,2,3]=Verde, [4,5,6]Azul\n";
	cin >> val;
	
	
	switch(val) // Valor a ser verificado - vai verificar nos cases
	{
	case 1:	
	case 2:
	case 3:
	cout << "Cor selecionada: Verde \n";
	break;	
	case 4:
	case 5:
	case 6:
	cout << "Cor selecionada: Azul \n";
	break;	
	default: // Caso nenhum dos comandos anteriores seja igual a expressão
	cout << "Cor selecionada invalida \n";
	}
	return 0;
}

/*
Switch(expressão)
{
case const1:
comandos;
break;
case const2:
comandos;
break;
default:
comando;
}
*/