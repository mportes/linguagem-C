#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite dois valores inteiros positivos para descobrir qual o maior: ");
	scanf("%d %d", &a, &b);
	
	if(a>b) printf("%d é o maior número!", a);
	else printf("%d é o maior número!", b);
	
	getch();
	return 0;
}
