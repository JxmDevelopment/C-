// SIMULANDO UM PLAYER EM UM JOGO

#include <iostream>
using namespace std;
int main(){
	
	// TIPO, NOME;
	// TIPO, NOME = VALOR;
	int vidas=0; // Numeros
	char letra='J'; // Letras - ( char letras[20] permitiria um texto com até 20 letras )
	double decimal=5.2; // Numeros Com Virgula
	float decimal2=5.2; // Numero Com Virgula Com Precição Menor ( Onde Seria 2.49999 no double aqui seria 2.5 )
	bool vivo=true; // Verdadeiro Ou Falso ( 1 = verdadeiro / 0 = falso )
	string nome="Malboro"; // Texto
	
	// cout = Oque deseja imprimir
	cout  << vidas << "\n" << letra << "\n" << decimal << "\n" << vivo << "\n" << nome << "\n";
	return 0;
}