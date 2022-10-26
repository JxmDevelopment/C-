#include <iostream>
#include <string.h> // Para usar o If ( Comparar String )
#include <stdlib.h> // Para o Sistem Pause

using namespace std;
int main (int argc, char *argv[]){ // int argc = Armazena quantidade de parâmetros <-> *argv[] = Armazena os argumentos
	
	if(argc > 1){
		if(!strcmp(argv[1],"sol")){
			cout << "Vou ao club." << endl;
		}else if (!strcmp(argv[1],"nublado")){
			cout << "Vou ao cinema." << endl;
		}	else{
			cout << "Vou ficar em casa" << endl;
		}
	}
	system ("pause");
	return 0;
}

// Passa informação do windows para o programa
// -> 18:56 <-
// https://www.youtube.com/watch?v=QilaiaDY94w&list=PLx4x_zx8csUjczg1qPHavU1vw1IkBcm40&index=21