#include <stdio.h>
#include <conio.h>

int main()
{
	float p1, p2, a, m;
	printf("Insira a nota da primeira avaliacao: ");
	scanf("%f", &p1)/
	printf("Insira a nota da segunda avaliacao: ");
	scanf("%f", &p2);
	printf("Insira a nota das atividades: ");
	scanf("%f", &a);
	m=(p1*4+p2*4+a*2)/10;
	printf("A media do aluno e igual a: %f\n", m);
	getch();
	return 0;
}
