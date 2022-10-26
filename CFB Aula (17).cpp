#include <iostream>
using namespace std;
int main (){
	
	int n1,n2,res;
	char opc;
	
	inicio: 
	
	cout << "Digite o valor da primeira nota: ";
	cin >> n1;
	cout << "Digite o valor da segunda nota: ";
	cin >> n2;
	res= n1+n2;
	if(res >=60)
	{
	cout << "Nota do aluno: " << n1+n2; // Criei
	cout << "\nAluno aprovado\n";
	}
	else
	{
	cout << "Nota do aluno: " << n1+n2; // Criei
	cout << "\nAluno reprovado\n";
	}
	
	cout << "\nDigitar outras notas?[s/n]";
	cin >> opc; // Verifica se foi sim ou não
	
	if (opc == 's' or opc == 'S'){
	goto inicio; // faz o loop até o inicio
	}
	
	return 0;
}
