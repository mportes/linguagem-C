#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[7], b[7], c[7][2], i, j;
	
	for(i=0; i<7; ++i) {
		printf("Entre com a matriz A: ");
		scanf("%d", &a[i]);
		printf("Entre com a matriz B: ");
		scanf("%d", &b[i]);
		c[i][0]=a[i];
		c[i][1]=b[i];
	}
	
	printf("\n\nOs componentes da matriz C são: ");
	
	for(j=0; j<2; ++j) {
		for(i=0; i<7; ++i) {
			printf("\n%d", c[i][j]);
		}
	}
	
	getch();
	return 0;
}
