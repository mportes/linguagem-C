#include <stdio.h>
#include <conio.h>

int main()
{
	float p, v, taxa, tempo;
	printf("Insira o valor normal da prestacao: ");
	scanf("%f", &v);
	printf("Insira o valor da taxa: ");
	scanf("%f", &taxa);
	printf("Insira o tempo: ");
	scanf("%f", &tempo);
	p=v+(v*(taxa/100)*tempo);
	printf("O valor da prestacao em atraso e igual a %f\n", p);
	getch();
	return 0;
}
