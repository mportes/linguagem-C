#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os números a serem avaliados como divisíveis por 2 e 3 ou como não divsisíveis por 2 e 3: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a%2==0) && (a%3==0)) printf("%d é divísivel por 2 e por 3\n", a);
	else printf("%d não é divisível por 2 e por 3\n", a);
	
	if((b%2==0) && (b%3==0)) printf("%d é divísivel por 2 e por 3\n", b);
	else printf("%d não é divisível por 2 e por 3\n", b);
	
	if((c%2==0) && (c%3==0)) printf("%d é divisível por 2 e por 3\n", c);
	else printf("%d não é divisível por 2 e por 3\n", c);
	
	return 0;
}
