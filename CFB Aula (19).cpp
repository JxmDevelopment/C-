// And = &&
// Or = ||
// Not = !
// 1 = true
// 0 = false

# include <iostream>
using namespace std;

int main(){
	
	int num;
	num=5;
	
	if(num > 3 && num < 8) // Maior que 3 e menos que 8
	{
	cout << "Valor aceito";
	}
	else
	{
	cout << "Nao aceito";
	}	
	return 0;
}