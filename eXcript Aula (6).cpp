#include <iostream>


using namespace std;
int main (){
	
	int num1 = 0;
	cout << "Informe um numero" << endl;
	cin >> num1;
	cout << endl;
	cout << "O numero digitado foi: " << num1 << endl;
	
	int num2 = 0;
	cout << endl;
	cout << "Informe um segundo numero" << endl; 
	cin >> num2;
	cout << endl;
	cout << "O numero digitado foi: " << num2 << endl;
	cout << endl;
	cout << "Os numeros digitados foram: "
	<< num1
	<< " e " // Da espaço no resultado dos 2 nuemros
	<<num2
	<< endl;
	return 0;
}