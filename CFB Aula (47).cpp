#include <iostream>
using namespace std;

void soma (int n1, int n2); // Prototipo
void soma ();

int main (){
	
	soma(20,30); //  Chamar a função
	soma();
	
	
	return 0;
}
// -> SOBRECARGA DE FUNÇÃO <-
// VOID = Só criar não vai retornar
// 2 Funções com mesmo nome, porém tem que ter argumentos de entrada diferente
void soma (int n1, int n2) {
	int re;
	re=n1+n2;
	cout << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}
void soma () {
	int n1,n2,re;
	n1=10;
	n2=20;
	re=n1+n2;
	cout << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}