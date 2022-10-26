#include <iostream>
using namespace std;
int main (){
	
	// LOOPING DO WHILE
	int i = 10;
	do{
		i++;
		cout << "Looping DO WHILE " << i << endl;
	}while (i>=10 && i<=20);
	
	// LOOPING WHILE
	int i2 = 10;
	while(i2>=10 && i2<=20){
		i2++;
		cout << "Looping WHILE: " << i2 << endl;
	}	
	return 0;
}

// DIFERENÇA DO "WHILE" PARA O "DO WHILE" É QUE O "DO WHILE" FAZ EXECUTAR 1X MESMO QUE NÃO SEJA ACEITO

/*

=
+=
-=
*=
/=
%=

x = x * 10; -> x *= 10;

*/