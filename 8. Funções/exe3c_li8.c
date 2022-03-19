#include <stdio.h>
#include <conio.h>
#include <locale.h>

int calculo(float *v, float *ta, int *te) {
	float p;
	p=*v+(*v*(*ta/100)**te);
	printf("Valor da prestação com juros: %.2f", p);
}

int main() {
	float v, ta;
	int te;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor da prestação sem juros: ");
	fflush(stdin); 
	scanf("%f", &v);
	
	printf("Taxa de juros: ");
	fflush(stdin); 
	scanf("%f", &ta);
	
	printf("Tempo atrasado (dias): ");
	fflush(stdin); 
	scanf("%d", &te);
	
	calculo(&v, &ta, &te);
	
	getch();
	return 0;	
}
