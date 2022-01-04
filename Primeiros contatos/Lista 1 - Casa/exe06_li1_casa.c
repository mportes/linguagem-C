#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float R, A, C;
	printf("Insira o valor do raio da circunferencia: ");
	scanf("%f", &R);
	A=M_PI*(R*R);
	C=2*M_PI*R;
	printf("O valor da area da circunferencia e %f e o do valor do comprimento e igual a %f\n", A, C);
	getch();
	return 0;
}
