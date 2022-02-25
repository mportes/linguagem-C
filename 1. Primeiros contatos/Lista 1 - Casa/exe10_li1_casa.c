#include <stdio.h>
#include <conio.h>

int main() {
	int a, b, c;
	printf("Insira o primeiro numero: ");
	scanf("%i", &a);
	printf("Insira o segundo numero: ");
	scanf("%i", &b);
	c=a;
	a=b;
	b=c;
	printf("Os numeros trocados sao, respectivamente, %i e %i\n", a, b);
	getch();
	return 0;
}
