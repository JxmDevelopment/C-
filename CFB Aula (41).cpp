// JOGO DA FORCA

#include <iostream>
#include <stdlib.h> // Utilizado para poder usar o comando "cls" que limpa a janela de CMD
using namespace std;
int main()
    {
	char palavra[30],letra[1],secreta[30]; // Palavra = palavra secreta | Letra = Letra que acertou | Secreta = Vai mostrando a palavra de acordo com oque vai sendo mostrada
    int tam,i,chances,acertos; // Tamanho = tamanho | i = Indice | Chances = Mostrar quantas chances ainda restam | Acertos = Mostrar os acertos
    bool acerto=false;
    
    // Variaveis
    chances=6; // Quantas chances ele vai ter
    tam=0;
    i=0;
    acerto=false;
    acertos=0;
    // Códigos
    cout << "Digite a palavra secreta: ";
    cin >> palavra; // Aarmazena em palavra
    system("cls"); // Limpar a tela para a pessoa não ver a palavra
    while(palavra[i] != '\0') // Enquanto palavra na posição [i] for diferente de \0  | '\0' = Ele é o caracter do Enter
	{
	i++;
	tam++;
    }
    for(i=0;i<30;i++)
    {
    secreta [i]='-'; // Acrescenta tracinho nas letras da palavra secreta
	} // A pessoa digita uma letra, verifica se a pessoa acertou a letra
	while(chances > 0 && acertos < tam) // Enquanto as chances forem maiores do que 0, e enquanto acertos for menos do que tamanho da palavra
	{
	cout << "Chances restantes: " << chances << "\n"; // Mostra para o jogador as chances restantes
	cout << "Palavra secreta: ";
	for(i=0; i<tam; i++)
	{
	cout << secreta [i];
	}
	cout << "\nDigite uma letra: ";
	cin >> letra[0];
	for(i=0; i<tam; i++)
	{
	if(palavra[i]==letra[0]) // Se acertou
	{
	acerto=true;
	secreta[i]=palavra[i];
	acertos++;
	}
	}
	if(!acerto) // Se mão Acertou
	{
	chances--;
	}
	acerto=false; // Se não acertou limpa o cmd
	system("cls");
	}
	if(acertos==tam)
	{
	cout << "Voce venceu !\n";
	}
	else
	{
	cout << "Voce perdeu !\n";
	}
	system("pause");	
    return 0;
}