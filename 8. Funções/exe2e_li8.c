#include <stdio.h>
#include <conio.h>
#include <locale.h>

float a[12], b[12], c[12], aux;
int i, j;

int leitura1() {
	for(i=0;i<12;++i) {
		printf("Digite um número:");
		scanf("%f", &a[i]);
	}
}

int leitura2() {
	printf("\n\n");
	
	for(i=0;i<12;++i) {
		printf("Digite um número:");
		scanf("%f", &b[i]);
	}
}

int ordem1() {
	for(i=0; i<11; ++i) {
		for(j=i+1; j<12; ++j) {
			if(a[i]>a[j]) {
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
}

int ordem2() {
	for(i=0; i<11; ++i) {
		for(j=i+1; j<12; ++j) {
			if(b[i]>b[j]) {
				aux=b[i];
				b[i]=b[j];
				b[j]=aux;
			}
		}
	}
}

int ordem3() {
	for(i=0; i<11; ++i) {
		for(j=i+1; j<12; ++j) {
			if(c[i]>c[j]) {
				aux=c[i];
				c[i]=c[j];
				c[j]=aux;
			}
		}
	}
}

operacao() {
	for(i=0; i<12; ++i) c[i]=a[i]+b[i];
}

exibir() {
	printf("\n\nResultados: ");
	for(i=0; i<12; ++i) printf("\n%.2f", c[i]);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	leitura1();
	ordem1();
	leitura2();
	ordem2();
	operacao();
	ordem3();
	exibir();
	getch();
	return 0;
}
