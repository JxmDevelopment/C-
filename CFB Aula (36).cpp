// Array = Vetor -> Coleção de variáveis do mesmo tipo
#include <iostream>
using namespace std;
int main ()
{
int tam=5; // tamanho = 5 ( 5 vetores )
int vetor[tam]; // vetor [tamanho]
int i;
vetor[0]=10;
vetor[1]=20;
vetor[2]=30;
vetor[3]=40;
vetor[4]=50;
for (i=0; i<tam; i++) // i=0 inicia no 0 || i<5 enquanto i for menos do que 5, que é o tamanho do nosso ventor || iniciar o vetor em 1
{
cout << vetor[i] << "\n"; // Mostrará todos os vetores
}
return 0;
}