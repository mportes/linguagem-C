#include <stdio.h>
#include <conio.h>

int main() {
	float m, h, i;
	printf("Insira a sua massa em kg: ");
	scanf("%f", &m);
	printf("Insira a sua altura em metros: ");
	scanf("%f", &h);
	i=m/(h*h);
	printf("O seu Indice de Massa Corporal (IMC) e igual a %f\n", i);
	getch();
	return 0;
}
