#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os valores dos lados do tri�ngulo: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a>b+c) || (b>a+c) || (c>a+b)) printf("Os lados n�o caracterizam um tri�ngulo!");	
	else {
		if((a==b) && (b==c)) printf("O tri�ngulo � equil�tero!");
		
		else {
			if((a==b) || (a==c) || (b==c)) printf("O tri�ngulo � is�sceles!");
			else printf("O tri�ngulo � escaleno!");
		}
	}
	return 0;
}
