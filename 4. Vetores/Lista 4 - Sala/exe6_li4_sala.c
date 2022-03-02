#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a[8], b[8];
	int i;
	
	for(i=0; i<=7; ++i) {
		printf("Digite um número para ver seu quadrado: ");
		scanf("%f", &a[i]);
		b[i] = a[i] * a[i];
	}
	
	printf("\n\n\n");
	printf("Os números digitados ao quadrado são iguais a: \n");
	
	for(i=0; i<=7; ++i) printf("%.2f\n", b[i]);
	
	getch();
	return 0;
}
