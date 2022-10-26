#include <iostream>
using namespace std;

void imp (string txt); // (string txt="") CASO SEJA OMITIDO ALGUMA ESCRITA

int main (){
	
	imp("Programacao"); // imp()
	
	return 0;
}

// OMISSÃO DE ARGUMENTOS & ARGUMENTOS PADRÕES

void imp (string txt){
	cout << "\n" << txt << "\n";	
}