#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;
	printf("Escreva o numero que voce quer elevar ao quadrado: ");
	scanf("%i", &a);
	b=a*a;
	printf("O valor ao quadrado e igual a %i\n", b);
	getch();
	return 0;
}
