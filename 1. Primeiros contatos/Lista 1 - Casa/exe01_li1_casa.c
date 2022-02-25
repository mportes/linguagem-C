#include <stdio.h>
#include <conio.h>

int main() {
	float r, d;
	printf("Digite o valor em reais: ");
	scanf("%f", &r);
	d=r/2.4;
	printf("O valor de %f reais convertido para dolares e igual a %f dolares\n", r, d);
	getch();
	return 0;
}
