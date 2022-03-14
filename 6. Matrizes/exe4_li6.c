#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[4], b[4], c[4][2], i, j;
	
	fflush(stdin);
	for(i=0; i<4; ++i) {
		printf("Entre com um número: ");
		scanf("%d", &a[i]);
		c[i][0]=a[i]*2;
	}
	
	for(i=0; i<4; ++i) {
		printf("Entre com um número: ");
		scanf("%d", &b[i]);
		c[i][1]=5-b[i];
	}
	
	printf("\n\nResultados: ");
	
	for(i=0; i<2; ++i) {
		for(j=0; j<4; ++j) {
			printf("\n%d", c[j][i]);
		}
	}
	
	getch();
	return 0;
}
