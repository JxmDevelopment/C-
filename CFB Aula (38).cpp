#include <iostream>
using namespace std;
int main (){
	
	int matriz[3][4];
	int l,c; // L de Linha, C de Coluna
	// 1 linha
	matriz[0][0]=0;
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[0][3]=0;
	// 2 linha
	matriz[1][0]=1;
	matriz[1][1]=1;
	matriz[1][2]=1;
	matriz[1][3]=1;
	// 3 linha
	matriz[2][0]=2;
	matriz[2][1]=2;
	matriz[2][2]=2;
	matriz[2][3]=2;
	
	for(l=0;l<3;l++)
	{
	for(c=0;c<4;c++)
	{
	cout << matriz[l][c] << " "; // Dar espaço entre 1 digito e outro
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