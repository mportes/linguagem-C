#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
	float r, a, c;
	printf("Insira o valor do raio da circunferencia: ");
	scanf("%f", &r);
	a=M_PI*(r*r);
	c=2*M_PI*r;
	printf("O valor da area da circunferencia e %f e o do valor do comprimento e igual a %f\n", a, c);
	getch();
	return 0;
}
