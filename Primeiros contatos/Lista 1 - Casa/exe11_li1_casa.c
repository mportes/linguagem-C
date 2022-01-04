#include <stdio.h>
#include <conio.h>

int main()
{
	int A, B;
	printf("Insira o primeiro numero: ");
	scanf("%i", &A);
	printf("Insira o segundo numero: ");
	scanf("%i", &B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("Os numeros trocados sao, respectivamente, %i e %i\n", A, B);
	getch();
	return 0;
}




