#include <iostream>
using namespace std;
int main (){
	
	char c;
	cout << "Por favor digite uma letra entre A ate G" << endl;
	cin >> c;
	
	switch(c)
	{
		case 'a' :
		case 'A' :
			cout << "Voce digitou a letra 'a'" << endl;
			break;
		case 'b' :
		case 'B' :
			cout << "Voce digitou a letra 'b'" << endl;
			break;
		case 'c' :
		case 'C' :
		case 'd' :
		case 'D' :
		case 'e' :
		case 'E' :
		case 'f' :
		case 'F' :
		case 'g' :
		case 'G' :
			cout << "Voce digitou a letra: 'c,d,e,f, ou g''" << endl;
			break;
		default :
			cout << "Voce nao digitou uma letra de A a G" << endl;
	}
	return 0;
}
