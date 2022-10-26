#include <iostream>
using namespace std;
int main ()
{	
	cout << "Digite um numero entre 1 ate 3" << endl;
	int num = 0;
	cin >> num;
	
	if(num==1)
	{
		for (int i=0; i<5; i++)
		cout << "A variavel da instrucao 'FOR' e: " << i << endl;
	}
	else
	{
		if (num==2)
		{
			int i2 = 0;
			while(i2<5)
			{
			i2++;
			cout << "O valor da variavel 'i2' utilizada na instrucao 'WHILE' e: " << i2 << endl;
		    }
	    }
    else
       {
    	if (num==3)
    	 {
    		int i3 = 0;
    		do
    		{
    		i3++;
    		cout << "O valor da variavel 'i3' utilizada na instrucao 'DO WHILE' e: " << i3 << endl;
			}
    		while(i3<5);	
		}
	   }
    }
	return 0;
}

// DEPURAÇÃO = UMA FORMA DE EXECUTAR O PROGRAMA, E ACOMPANHAR LINHA POR LINHA A EXECUÇÃO DO NOSSO PROGRAMA