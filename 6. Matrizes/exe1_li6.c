#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a[5][3], b[5][3], c[5][3]; int i, j;
	
	
	fflush(stdin);
	for(j=0;j<5; ++j) {
		for(i=0; i<3; ++i) {
			printf("Digite um número para a matriz A: ");
			scanf("%f", &a[j][i]);
			printf("Digite um número para a matriz B: ");
			scanf("%f", &b[j][i]);
			c[j][i]=a[j][i]+b[j][i];
		}
	}
	
	printf("\n\nOs resultados das somas dos números da matriz A com os da matriz B são: ");
	
	for(j=0; j<5; ++j) {
		for(i=0; i<3; ++i) {
			printf("\n%.2f", c[j][i]);
		}
	}
	
	getch();
	return 0;
}
