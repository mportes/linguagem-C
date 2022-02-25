#include <stdio.h>
#include <conio.h>

int main() {
	float a, ar, b, p;
	printf("Insira o valor da altura do retangulo: ");
	scanf("%f", &a);
	printf("Insira o valor da base do retangulo: ");
	scanf("%f", &b);
	ar=a*b;
	p=(2*a)+(2*b);
	printf("A area do retangulo e igual a %f e o perimetro do retangulo e igual a %f\n", ar, p);
	getch();
	return 0;
}
