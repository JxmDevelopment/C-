#include <iostream>
using namespace std;
int main (){
	
	int matriz[3][4];
	int l,c; // L de Linha, C de Coluna	
	
	for(l=0;l<3;l++)
	{
	for(c=0;c<4;c++)
	{
//	matriz[l][c]=l; Dava o valor de L
    cin >> matriz[l][c]; // Agora eu digito os valores L/C
    }
    }
    for(l=0;l<3;l++)
	{
	for(c=0;c<4;c++)
	{
	cout <<  matriz[l][c] << " ";  // Dar espaço entre 1 digito e outro
    }
    cout << "\n";
    }
    return 0;  
}

/*
-> LEMBRANDO QUE COMEÇA DO 0 <-

int matriz[3][4]; // 3 linhas e 4 colunas
matriz [0][0]=5;
matriz [2][1]=3;

  0   1   2   3  Linhas ->
-----------------
| 5 |   |   |   | 0
-----------------
|   |   |   |   | 1
-----------------
|   | 3 |   |   | 2
-----------------
Colunas ^
*/