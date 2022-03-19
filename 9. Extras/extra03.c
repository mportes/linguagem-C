#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c, d, e, f;
	
	printf("Digite três valores cujos quadrados você quer descobrir: ");
	scanf("%d %d %d", &a, &b, &c);
	
	d = a*a;
	e = b*b;
	f = c*c;
	
	if(f<1000) {
		printf("O quadrado de %d é igual a %d\n", a, d);
		printf("O quadrado de %d é igual a %d\n", b, e);
		printf("O quadrado de %d é igual a %d\n", c, f);
		
		getch();
		return 0;
	}
	
	getch();
	return 0;
}

