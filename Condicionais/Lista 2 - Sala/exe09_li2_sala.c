#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os números a serem avaliados como divisíveis por 4 e/ou por 5: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a%4==0) || (a%5==0)) printf("%d é divisível por 4 e/ou por 5\n", a);
	else printf("%d não é divisível por 4 e/ou por 5\n", a);
	
	if((b%4==0) || (b%5==0)) printf("%d é divisível por 4 e/ou por 5\n", b);
	else printf("%d não é divisível por 4 e/ou por 5\n", b);
	
	if((c%4==0) || (c%5==0)) printf("%d é divisível por 4 e/ou por 5\n", c);
	else printf("%d não é divisível por 4 e/ou por 5\n", c);
	
	return 0;
}
