#include <iostream>
//#include <iomanip> Necessario para funcionar "setw" - Da espaço no cmd

using namespace std;
int main (){
	
	cout << "Estudando a entrada e saida de dados." << endl;
	cout << hex << 10 + 50 << endl; // Colocando o hex faz dar o valor em decimal
//	cout << setw(500) << 10 + 50 << endl; // setw faz soltar 498 espaços, pois o resultado ( 60 ) tem 2 digitos
	

	return 0;
}


/*
<iostream.h> versão evoluida <stdio.h>
<iostream.h> enviar / receber dados

->> C <<-
stdin, stdout, stdlog
std = standart = padrão

->> C++ <<-
cin , cout, clog, cerr
c = console = padrão

( << ) inserção -> Mostra dados = cout
( >> ) extração -> Adiciona dados = cin
*/

