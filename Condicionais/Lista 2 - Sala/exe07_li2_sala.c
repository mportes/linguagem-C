#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite o número: ");
	scanf("%d", &a);
	
	if(a<0) {
		b=a*(-1);
		printf("O número positivo é igual a %d", b);
	} else printf("O número positivo é igual a %d", a);
	
	return 0;
}
