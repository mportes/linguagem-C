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
	
	printf("A soma de todos os números pares de 1 a 500 é igual a %d.", v);
	
	getch();
	return 0;
}	
