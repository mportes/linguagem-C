#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite o n�mero: ");
	scanf("%d", &a);
	
	if(a<0) {
		b=a*(-1);
		printf("O n�mero positivo � igual a %d", b);
	} else printf("O n�mero positivo � igual a %d", a);
	
	return 0;
}
