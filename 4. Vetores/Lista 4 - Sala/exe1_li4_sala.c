#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[5], b[5], i;
	
	for(i=0; i<=4; ++i) {
		printf("Digite um número: ");
		scanf("%d", &a[i]);
	}
	
	printf("\n\n");
	
	for(i=0; i<=4; ++i) {
		b[i] = a[i]*3;
	}
	
	printf("Os valores digitados multiplicados por 3 são iguais a: \n");	
		
	for(i=0; i<=4; ++i) {
		printf("%d\n", b[i]);	
	}
	
	
	getch();
	return 0;
}
