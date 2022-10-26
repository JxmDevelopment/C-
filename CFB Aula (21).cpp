#include <iostream>
using namespace std;

int main()
    {
    
    int n1,n2,nota; // nota 1, nota 2, nota
    string res; // String = Letras
    
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    
    nota =n1+n2;
    
//    (nota >= 60) ? res="Aprovado" : res="Reprovado"; // Se a nota for maior que 60 Aprovado, se não, reprovado.
    res=(nota >=60) ? "Aprovado" : "Reprovado"; // Outra forma
    cout << "\nSituacao do aluno: " << res << "\n";
    
    return 0;	
	}
