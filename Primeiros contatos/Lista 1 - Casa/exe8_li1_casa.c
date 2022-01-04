#include <stdio.h>
#include <conio.h>

int main()
{
	float A, B, C, D, E;
	printf("Insira a nota do primeiro bimestre: ");
	scanf("%f", &A);
	printf("Insira a nota do segundo bimestre: ");
	scanf("%f", &B);
	printf("Insira a nota do terceiro bimestre: ");
	scanf("%f", &C);
	printf("Insira a nota do quarto bimestre: ");
	scanf ("%f", &D);
	D=(A+B+C+D)/4;
	printf("A media anual do aluno e igual a: %f\n", D);
	getch();
	return 0;
}
