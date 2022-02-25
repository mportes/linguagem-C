#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float v, r, a;
	printf("Insira o valor do raio do fundo da lata: ");
	scanf("%f", &r);
	printf("Insira o valor da altura da lata: ");
	scanf("%f", &a);
	v=M_PI*r*r*a;
	printf("O volume da lata de oleo e igual a: %f\n", v);
	getch();
	return 0;
}
