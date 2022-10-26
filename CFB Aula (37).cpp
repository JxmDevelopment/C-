// Array = Vetor -> Coleção de variáveis do mesmo tipo
#include <iostream>
using namespace std;
int main ()
{
int vetor[5]={10,20,30,40,50}; // vetor[quantidade]={valores}
int i;
for (i=0; i<5; i++) // i=0 inicia no 0 || i<5 enquanto i for menos do que 5, que é o tamanho do nosso ventor || iniciar o vetor em 1
{
cout << vetor[i] << "\n"; // Mostrará todos os vetores
}
return 0;
}