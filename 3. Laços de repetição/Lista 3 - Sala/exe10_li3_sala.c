#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, v;
	
	v=0;
	
	for(i=0; i<=500; i=i+2) {
		v=v+i;
	}	
	
	printf("A soma de todos os n�meros pares de 1 a 500 � igual a %d.", v);
	
	getch();
	return 0;
}	
