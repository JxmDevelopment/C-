#include <iostream>
using namespace std;
void texto (); // Apresentando a função ao programa - Declarando
void soma(int n1, int n2);
int soma2 (int n1, int n2);

int main (){
	int res; // Armazenar resultado
	res = soma2(175,25);
	cout << "Valor de res: " << res << endl;

	return 0;
}

void texto(){ // VOID = Não vai retornar a nada "acabou a função, acabou"
cout << "\nAula De Programacao" << endl;
}

void soma(int n1, int n2){
	cout << "Soma dos valores: " << n1+n2 << endl;
}

int soma2 (int n1, int n2){
	return n1+n2; // Qualquer valor de saida diferente de VOID se usa Return
}