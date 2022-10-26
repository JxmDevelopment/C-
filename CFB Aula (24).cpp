#include <iostream>
using namespace std;
int main ()
{
	int val; // Valor a ser testado
	cout << "Selecione um transporte:\n";
	cout << "[1]=Carro, [2]Moto, [3]=Aviao, [4]=Helicoptero\n";
	cin >> val;
	
	
	switch(val) // Valor a ser verificado - vai verificar nos cases
	{
	case 1:	
	case 2:
	cout << "Transporte terrestre\n";
	switch (val)
	{
		case 1:
		cout << "Carro\n";
		break;
		case 2:
		cout << "Moto\n";
		break;
	}
	break;	
	case 3:
	case 4:
	cout << "Transporte Aereo\n";
	switch(val)
	{
		case 3:
		cout << "Aviao\n";
		break;
		case 4:
		cout << "Helicoptero\n";
		break;
	}
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