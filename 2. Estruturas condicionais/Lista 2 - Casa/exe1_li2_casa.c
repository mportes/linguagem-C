#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Digite o número a ser avaliado como par ou ímpar: ");
	scanf("%d", &a);
	
	if(a%2==0) printf("O número %d é par!", a);
	else printf("O número %d é ímpar!", a);
	
	return 0;
}
