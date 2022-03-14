#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a[20], b[30], c[50], s;
	int i, j;
	
	for(i=0; i<20; ++i) {
		printf("Digite um número: ");
		scanf("%f", &a[i]);
		c[i]=a[i];
	}
	
	for(i=0; i<30; ++i) {
		printf("Digite um número: ");
		scanf("%f", &b[i]);
	}
	
	i=20;
	j=0;
	
	while(i<50) {
		c[i]=b[j];
		++i;
		++j;
	}
	
	for(i=0; i<49; ++i) {
		for(j=i+1; j<50; ++j) {
			if(c[i]>c[j]) {
				s=c[i];
				c[i]=c[j];
				c[j]=s;
			}
		}	
	}
	
	printf("\n\nResultados:");
	
	for(i=0; i<50; ++i) printf("\n%.2f", c[i]);
	
	getch();
	return 0;
}
