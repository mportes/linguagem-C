#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A;
	
	printf("Digite o número a ser avaliado como par ou ímpar: ");
	scanf("%d", &A);
	
	if(A%2==0) printf("O número %d é par!", A);
	else printf("O número %d é ímpar!", A);
	
	return 0;
}
