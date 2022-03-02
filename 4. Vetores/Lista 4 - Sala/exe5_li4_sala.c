#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a[20], b[30], c[50];
	int i, j;
	
	for(i=0; i<=19; ++i) {
		printf("Digite um número: ");
		scanf("%f", &a[i]);
	}
	
	for(i=0; i<=29; ++i) {
		printf("Digite um número: ");
		scanf("%f", &b[i]);
	}
	
	for(i=0; i<=19; ++i) c[i] = a[i];
	
	
	i=0;
	j=20;
	
	while(i<=29) {
		c[j] = b[i];
		++i;
		++j;
	}
	
	printf("\n\n\n");
	printf("Os números digitados foram: \n");
	
	for(i=0; i<=49; ++i) printf("%.2f\n", c[i]);
	
	getch();
	return 0;
}
