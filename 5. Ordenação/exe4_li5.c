#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[12], b[12], c[12], i, j, s;
	
	for(i=0; i<12; ++i) {
		printf("Digite um número: ");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<11; ++i) {
		for(j=1+i; j<12; ++j) {
			if(a[i]>a[j]) {
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
	
	printf("\n\n");
	
	for(i=0; i<12; ++i) {
		printf("Digite um número: ");
		scanf("%d", &b[i]);
	}
	
	for(i=0; i<11; ++i) {
		for(j=1+i; j<12; ++j) {
			if(b[i]>b[j]) {
				s=b[i];
				b[i]=b[j];
				b[j]=s;
			}
		}
	}
	
	for(i=0; i<12; ++i) c[i]=a[i]+b[i];
	
	for(i=0; i<11; ++i) {
		for(j=1+i; j<12; ++j) {
			if(c[i]>c[j]) {
				s=c[i];
				c[i]=c[j];
				c[j]=s;
			}
		}
	}
	
	printf("\n\nResultados:");
	
	for(i=0; i<12; ++i) printf("\n%d", c[i]);
	
	getch();
	return 0;
}
