#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Digite o n�mero a ser avaliado como par ou �mpar: ");
	scanf("%d", &a);
	
	if(a%2==0) printf("O n�mero %d � par!", a);
	else printf("O n�mero %d � �mpar!", a);
	
	return 0;
}
