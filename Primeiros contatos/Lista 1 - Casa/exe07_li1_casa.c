#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float v, a, r;
	printf("Insira o valor do raio da esfera: ");
	scanf("%f", &r);
	v=4/3*M_PI*r*r*r;
	a=4*M_PI*r*r;
	printf("O volume da esfera e igual a %f e a area de sua superficie e igual a %f\n", v, a);
	getch();
	return 0;
}
