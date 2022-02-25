#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n;
	int  nm, x, a;
	
	printf("Digite o número a ser arredondado: ");
	scanf("%f", &n);
	
	nm=n*100;
	x=(nm % 100);
	
	if(x>=60) {
		a=(n-(x/100))+1;
	} else {
		a=(n-(x/100));
	}
	
	printf("O valor arredondado é igual a %d\n", a);
	return 0;
}
