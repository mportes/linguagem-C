#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float V, A, R;
	printf("Insira o valor do raio da esfera: ");
	scanf("%f", &R);
	V=4/3*M_PI*R*R*R;
	A=4*M_PI*R*R;
	printf("O volume da esfera e igual a %f e a area de sua superficie e igual a %f\n", V, A);
	getch();
	return 0;
}
