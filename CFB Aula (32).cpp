// Loop FOR

#include <iostream>
using namespace std;

int main()
{
int x,y;
for (x=1, y=0; x<11; x++, y+=2) // x+1 y+2
{
cout << x << " - ";
cout << y << "\n"; // \n faz apos da o valor de Y descer para a linha de baixo, caso não coloque ficaria em uma linha EX: 1 - 02 - 23 - 44
}
return 0;
}

/*
for ( ini; cond; inc/dec )
{
comando 1;
comando 2;
comando 3;
}
*/