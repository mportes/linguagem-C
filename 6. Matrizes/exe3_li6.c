#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	int a[10], b[10][3], i, j;
	
	fflush(stdin);
	for(i=0; i<10; ++i) {
		printf("Entre com um número: ");
		scanf("%d", &a[i]);
		b[i][0]=a[i]+5;
		b[i][1]=a[i];
		b[i][2]=a[i]*a[i];
	}
	
	for(i=0; i<10; ++i) {
		for(j=b[i][1]-1; j>0; --j) {
			b[i][1]=b[i][1]*j;
		}
	}
	
	printf("\n\nResultado dos números digitados somados a 5: ");
	for(i=0; i<10; ++i) printf("\n%d", b[i][0]);
	
	printf("\n\nResultado dos números digitados fatoriais: ");
	for(i=0; i<10; ++i) printf("\n%d", b[i][1]);
	
	printf("\n\nResultado dos números digitados ao quadrado: ");
	for(i=0; i<10; ++i) printf("\n%d", b[i][2]);
	
	getch();
	return 0;
}

