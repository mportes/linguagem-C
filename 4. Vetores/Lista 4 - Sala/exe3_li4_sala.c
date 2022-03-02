#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[5], b[5], c[5], i, j;
	
	for(i=0; i<=4; ++i) {
		printf("Digite um número: ");
		scanf("%d", &a[i]);
	}
	
	printf("\n\n");
	
	for(i=0; i<=4; ++i) {
		printf("Digite um número a ser subtraído dos de cima, respectivamente: ");
		scanf("%d", &b[i]);
	}
	
	printf("\n\n");
	printf("Os resultados das subtrações são, respectivamente: \n");
	
	for(i=0; i<=4; ++i) {
		c[i] = a[i] - b[i];
		printf("%d\n", c[i]);
	}
	
	getch();
	return 0;
}
