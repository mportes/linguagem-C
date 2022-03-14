#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a[12], b;
	int i, j;
	
	for(i=0; i<12; ++i) {
		printf("Insira um número: ");
		scanf("%f", &a[i]);
	}
	
	for(i=12; i>0; --i) {
		for(j=i-1; j>=0; --j) {
			if(a[i]>a[j]) {
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
	
	printf("\n Valores digitados na ordem decrescente: ");	
	for(i=0; i<12; ++i) printf("\n\n %.2f \n", a[i]);
	
	getch();
	return 0;
}
