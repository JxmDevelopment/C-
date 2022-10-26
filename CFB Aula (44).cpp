#include <iostream>
using namespace std;
void texto (); // Apresentando a função ao programa - Declarando
void soma(int n1, int n2);

int main (){
	
	soma(15,5);
	return 0;
}

void texto(){ // VOID = Não vai retornar a nada "acabou a função, acabou"
cout << "\nAula De Programacao" << endl;
}

void soma(int n1, int n2){
	cout << "Soma dos valores: " << n1+n2 << endl;
}