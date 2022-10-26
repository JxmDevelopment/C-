// Array = Vetor -> Coleção de variáveis do mesmo tipo
#include <iostream>
using namespace std;
int main ()
{
int vetor[5]; // Mesma coisa que = int vetor0,vetor1,vetor2,vetor3,vetor4.
vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;
cout << vetor[2] << "\n"; // Irá mostrar o valor do vetor 2 = 30
return 0;
}