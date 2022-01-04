#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B, C;
	printf("Insira o primeiro numero: ");
	scanf("%i", &A);
	printf("Insira o segundo numero: ");
	scanf("%i", &B);
	C=A;
	A=B;
	B=C;
	printf("Os numeros trocados sao, respectivamente, %i e %i\n", A, B);
	getch();
	return 0;
}
