#include <stdio.h>
#include <conio.h>

int main()
{
	float c, f;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &f);
	c=(((f-32)*5)/9);
	printf("A temperatura em Celsius e: %f\n", c);
	getch();
	return 0;
}
