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
	
	if(d==e) printf("O tri�ngulo � um tri�ngulo ret�ngulo!");
	else printf("O tri�ngulo n�o � um tri�ngulo ret�ngulo!");
	
	getch();
	return 0;
}
