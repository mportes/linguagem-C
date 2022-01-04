#include <stdio.h>
#include <conio.h>

int main()
{
	float P1, P2, A, M;
	printf("Insira a nota da primeira avaliacao: ");
	scanf("%f", &P1)/
	printf("Insira a nota da segunda avaliacao: ");
	scanf("%f", &P2);
	printf("Insira a nota das atividades: ");
	scanf("%f", &A);
	M=(P1*4+P2*4+A*2)/10;
	printf("A media do aluno e igual a: %f\n", M);
	getch();
	return 0;
}
