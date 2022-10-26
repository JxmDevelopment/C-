#include <iostream>
#include <cstdlib> // Adicionado para limpar o chat

using namespace std;
int main (){
	
	int n1,n2,res;
	char opc; // Verdadeiro ou Falso
	
	inicio:
	system ("cls"); // Comando para limpar o chat ( precisa do include <cstdlib> )
	
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
	
	cout << "\nDigitar outras notas?[S/N]";
	cin >> opc; // Verifica se foi sim ou não
	
	if (opc == 's' or opc == 'S'){
	goto inicio; // faz o loop até o inicio
	}
	return 0;
}
