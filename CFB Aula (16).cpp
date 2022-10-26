#include <iostream>
using namespace std;
int main (){
	
	int n1,n2,res;
	char opc;
	
	cout << "Digite o valor da primeira nota: ";
	cin >> n1;
	cout << "Digite o valor da segunda nota: ";
	cin >> n2;
	res= n1+n2;
	if(res >=60)
	{
	cout << "Aluno aprovado\n";
	}
	else
	{
	cout << "Aluno reprovado\n";
	}
	cout << "Nota do aluno: " << n1+n2; // Criei
	return 0;
}
