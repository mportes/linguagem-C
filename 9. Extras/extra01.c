#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite dois valores inteiros positivos para descobrir qual o maior: ");
	scanf("%d %d", &a, &b);
	
	if(a>b) printf("%d � o maior n�mero!", a);
	else printf("%d � o maior n�mero!", b);
	
	getch();
	return 0;
}
