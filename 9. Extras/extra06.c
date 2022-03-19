#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, d, e;
	
	printf("Digite o valor da hipotenusa: ");
	scanf("%f", &a);
	
	printf("Digite os valores dos catetos: ");
	scanf("%f %f", &b, &v);
	
	d=a*a;
	e=(b*b)+(c*c);
	
	if(d==e) printf("O triângulo é um triângulo retângulo!");
	else printf("O triângulo não é um triângulo retângulo!");
	
	getch();
	return 0;
}
