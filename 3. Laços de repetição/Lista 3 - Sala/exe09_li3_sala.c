#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a, b;
	
	printf("Digite o n�mero a ser exponenciado: ");
	scanf("%f", &a);
	printf("Digite a pot�ncia: ");
	scanf("%f", &b);
	printf("\n\n");
	
	a = pow(a, b);
	
	printf("O resultado da exponencia��o �: %.2f", a);
	
	getch();
	return 0;
}
