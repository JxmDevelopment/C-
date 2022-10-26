// Array = Vetor -> Coleção de variáveis do mesmo tipo
#include <iostream>
using namespace std;
int main ()
{
int vetor[5]; // Mesma coisa que = int vetor0,vetor1,vetor2,vetor3,vetor4.
int i;
vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;
for (i=0; i<sizeof(vetor)/4; i++) // Cada vetor tem 4 bytes, então dividindo por 4 dará o valor real
{
cout << vetor[i] << "\n"; // Mostrará todos os vetores
}
return 0;
}