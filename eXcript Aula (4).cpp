#include <iostream>
using namespace std;
int main (){
	
	int varint = 100;
	char c = 'r';
	double pflutuante = 5.99;
	
	cout << "O valor da variavel varint e: " << varint << endl;
	cout << "O valor da variavel c e: " << c << endl;
	cout << "O valor da variavel pflutuante e: " << pflutuante << endl;
	cout << endl; // Serve para pular line
	cout << "Memoria da variavel varint: " << sizeof(varint) << " bytes" << endl; // sizeoff da o valor que esta sendo utilizado na memória
	cout << "Memoria da variavel varint: " << sizeof(c) << " bytes" << endl;
	cout << "Memoria da variavel varint: " << sizeof(pflutuante) << " bytes" << endl;
	return 0;
}


