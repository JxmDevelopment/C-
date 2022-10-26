#include <iostream>
using namespace std;
int main (){
	
	int num = 0;
	cin >> num;
		
	string mes = (num==1) ?"Janeiro" :
		         (num==2) ?"Fevereiro" :
				 (num==3) ?"Março" :
				 (num==4) ?"Abril" :
				 (num==5) ?"Maio" :
				 (num==6) ?"Junho" :
				 (num==7) ?"Julho" :
				 (num==8) ?"Agosto" :
				 (num==9) ?"Setembro" :
				 (num==10) ?"Outubro" :
				 (num==11) ?"Novembro" :
				 (num==12) ?"Dezembro" :
				 	"O valor digitado, nao esta no intervalo entre 1 e 12";
				 	 cout << mes << endl;
	
	return 0;
}

// Mesmo da aula 33, porém simplificado
// Abaixo feito com a expressão switch

/* int main ()
{
	int num = 0;
	cout << "Digite um numero correspondente a um mes do ano: " << endl;
	cin >> num;**
	
	switch (num)
	{
		case 1:
		cout << "Janeiro" << endl;
		break;
		case 2:
		cout << "Fevereiro" << endl;
		break;
		case 3:
		cout << "Marco" << endl;
		break;
		case 4:
		cout << "Abril" << endl;
		break;
		case 5:
		cout << "Maio" << endl;
		break;
		case 6:
		cout << "Junho" << endl;
		break;
		case 7:
		cout << "Julho" << endl;
		break;
		case 8:
		cout << "Agosto" << endl;
		break;
		case 9:
		cout << "Setembro" << endl;
		break;
		case 10:
		cout << "Outubro" << endl;
		break;
		case 11:
		cout << "Novembro" << endl;
		break;
		case 12:
		cout << "Dezembro" << endl;
		break;
		default: // default porque só aceita número até 12
		cout << "O valor digitado nao corresponde a um mes do ano" << endl;
    }
	return 0;
} */
