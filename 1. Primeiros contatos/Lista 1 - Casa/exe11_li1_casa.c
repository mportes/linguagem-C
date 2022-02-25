#include <stdio.h>
#include <conio.h>

int main() {
	int a, b;
	printf("Insira o primeiro numero: ");
	scanf("%i", &a);
	printf("Insira o segundo numero: ");
	scanf("%i", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Os numeros trocados sao, respectivamente, %i e %i\n", a, b);
	getch();
	return 0;
}
