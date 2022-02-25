#include <stdio.h>
#include <conio.h>

int main() {
	float a, b, c, d, media;
	printf("Insira a nota do primeiro bimestre: ");
	scanf("%f", &a);
	printf("Insira a nota do segundo bimestre: ");
	scanf("%f", &b);
	printf("Insira a nota do terceiro bimestre: ");
	scanf("%f", &c);
	printf("Insira a nota do quarto bimestre: ");
	scanf ("%f", &d);
	media=(a+b+c+d)/4;
	printf("A media anual do aluno e igual a: %f\n", media);
	getch();
	return 0;
}
