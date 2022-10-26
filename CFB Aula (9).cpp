// VARIAVEL GLOBAL

#include <iostream>
using namespace std;

int apartamentos=40; //  Variavel Global

int main(){
	
	// Operadores Matematicos = + - / * % ()
	
	int casas=300; // Variavel local, só funciona dentro desse código
	int demolidas=34; // Criado para criar uma subtracao
	int resultado;
	
	resultado=(apartamentos+casas)-demolidas; // Estando dentro do '()' da a preferencia
	cout << "A soma das construcoes e de: " << resultado << "\n";
	
	cout << "Sendo um total de: " << demolidas << " casas demolidas"; // Criei para teste
	
	return 0;
}