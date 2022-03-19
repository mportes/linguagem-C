#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>


int potencia(float *a, float *b){
	float p;
	p=pow(*a, *b);
	printf("Resultado da potência: %.2f", p);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a,b;
	
	printf("Digite o número a ser exponenciado: ");
	scanf("%f", &a);
	
	printf("Digite a potência: ");
	scanf("%f", &b);
	
	potencia(&a, &b);
	
	getch();
	return 0;
}
