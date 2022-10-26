#include <iostream>
using namespace std;
int main ()
{
	int val; // Valor a ser testado
	cout << "[1]=Verde, [2]Azul, [3]Vermelho\n";
	cin >> val;
	
	switch(val) // Valor a ser verificado - vai verificar nos cases
	{
	case 1:
	cout << "Cor selecionada: Verde \n";
	break;
	
	case 2:
	cout << "Cor selecionada: Azul \n";
	break;
	
	case 3:
	cout << "Cor selecionada: Vermelho \n";
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