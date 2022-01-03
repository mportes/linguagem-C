#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float V, R, A;
	printf("Insira o valor do raio do fundo da lata: ");
	scanf("%f", &R);
	printf("Insira o valor da altura da lata: ");
	scanf("%f", &A);
	V=M_PI*R*R*A;
	printf("O volume da lata de oleo e igual a: %f\n", V);
	getch();
	return 0;
}
