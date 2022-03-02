#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[5], b[5], c[10], i, j;
	
	for(i=0; i<=4; ++i) {
		printf("Digite um número: ");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<=4; ++i) {
		printf("Digite um número: ");
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<=4; ++i) c[i] = a[i];
	
	i=0;
	j=5;
	
	while(i<=4) {
		c[j] = b[i];
		i++;
		j++;	
	}
	
	printf("\n\n");
	printf("Os números digitados foram: \n");
	
	for(i=0; i<=9; ++i) printf("%d\n", c[i]);
	
	getch();
	return 0;
}
