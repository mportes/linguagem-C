#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os n�meros a serem avaliados como divis�veis por 4 e/ou por 5: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a%4==0) || (a%5==0)) printf("%d � divis�vel por 4 e/ou por 5\n", a);
	else printf("%d n�o � divis�vel por 4 e/ou por 5\n", a);
	
	if((b%4==0) || (b%5==0)) printf("%d � divis�vel por 4 e/ou por 5\n", b);
	else printf("%d n�o � divis�vel por 4 e/ou por 5\n", b);
	
	if((c%4==0) || (c%5==0)) printf("%d � divis�vel por 4 e/ou por 5\n", c);
	else printf("%d n�o � divis�vel por 4 e/ou por 5\n", c);
	
	return 0;
}
