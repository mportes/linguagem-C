#include <stdio.h>
#include <conio.h>
#include <locale.h>

int a[30], b[30], c[60], i;

int leitura1() {
	for(i=0; i<30; ++i) {
		printf("Digite um número: ");
		scanf("%d", &a[i]);
	}
}

int leitura2() {
	printf("\n\n");
	
	for(i=0; i<30; ++i) {
		printf("Digite um número: ");
		scanf("%d", &b[i]);
	}
}

int aeb() {
	for(i=0; i<30; ++i) c[i]=a[i];
	for(i=30; i<60; ++i) c[i]=b[i-30];		
}


int exibir() {
	printf("\n\nOs números digitados foram: \n");
	for(i=0; i<60; ++i) {
		printf("%d\n", c[i]);
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	leitura1();
	leitura2();
	aeb();
	exibir();
	getch();
	return 0;
}
