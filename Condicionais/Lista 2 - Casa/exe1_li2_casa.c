#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A;
	
	printf("Digite o n�mero a ser avaliado como par ou �mpar: ");
	scanf("%d", &A);
	
	if(A%2==0) printf("O n�mero %d � par!", A);
	else printf("O n�mero %d � �mpar!", A);
	
	return 0;
}
