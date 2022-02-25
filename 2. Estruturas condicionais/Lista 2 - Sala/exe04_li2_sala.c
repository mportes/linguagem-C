#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os valores dos lados do triângulo: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a>b+c) || (b>a+c) || (c>a+b)) printf("Os lados não caracterizam um triângulo!");	
	else {
		if((a==b) && (b==c)) printf("O triângulo é equilátero!");
		
		else {
			if((a==b) || (a==c) || (b==c)) printf("O triângulo é isósceles!");
			else printf("O triângulo é escaleno!");
		}
	}
	return 0;
}
