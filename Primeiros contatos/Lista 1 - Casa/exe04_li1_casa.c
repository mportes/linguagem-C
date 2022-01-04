#include <stdio.h>
#include <conio.h>

int main()
{
	float A, Ar, B, P;
	printf("Insira o valor da altura do retangulo: ");
	scanf("%f", &A);
	printf("Insira o valor da base do retangulo: ");
	scanf("%f", &B);
	Ar=A*B;
	P=(2*A)+(2*B);
	printf("A area do retangulo e igual a %f e o perimetro do retangulo e igual a %f\n", Ar, P);
	getch();
	return 0;
}
