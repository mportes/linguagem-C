#include <stdio.h>
#include <conio.h>

int main()
{
	float r, d;
	printf("Digite o valor em dolares: ");
	scanf("%f", &d);
	r=d*2.4;
	printf("O valor de %f dolares convertido para reais e igual a %f reais\n", d, r);
	getch();
	return 0;
}
