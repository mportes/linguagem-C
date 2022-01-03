#include <stdio.h>
#include <conio.h>

int main()
{
	float c, n;
	printf("Insira o numero de coelhos: ");
	scanf("%f", &n);
	c=(n*0.7)/18+10;
	printf("O custo de criação de coelhos e igual a: %f\n", c);
	getch();
	return 0;
}
