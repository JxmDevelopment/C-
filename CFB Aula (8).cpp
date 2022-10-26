// VARIAVEL GLOBAL

#include <iostream>
using namespace std;

int apartamentos=40; //  Variavel Global

int main(){
	
	// Operadores Matematicos = + - / * % ()
	
	int casas=300; // Variavel local, só funciona dentro desse código
	int resultado;
	
	resultado=(apartamentos+casas)-34; // Estando dentro do '()' da a preferencia
	cout << "A soma das construcoes e de: " << resultado << "\n";
	
	return 0;
}