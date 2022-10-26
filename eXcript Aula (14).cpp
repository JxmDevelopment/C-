#include <iostream>
using namespace std;
int main (){
	
	cout << "Digite um numero" << endl;
	int  i = 0;
	cin >> i;
	
	string texto = (i<=10) ? "Menor ou igual dez" : "maior do que dez";
	
	cout << "O valor digitado anteriormente eh: " << texto << endl;
	
	return 0;
}

// <variável> = (condição) ? <valor1> : <valor2>;
// <variável> = (true) SE <valor1> SENÃO <valor2>;